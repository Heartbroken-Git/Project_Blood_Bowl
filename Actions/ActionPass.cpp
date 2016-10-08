/**
 * @file ActionPass.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 08/10/2016
 * @brief Fichier source définissant l'action de passer et reçevoir la balle (ainsi que le fait for probable de les rater)
*/

#include <queue>
#include <vector>
#include "ActionPass.hpp"

using namespace std;

/**
 * @brief Constructeur de ActionPass
 * @param actingPlayer le joueur actif
 * @pre actingPlayer doit être un joueur de l'équipe jouant en jeu
 */
ActionPass::ActionPass(Player actingPlayer){
	actingPlayer_ = actingPlayer;
}
/**
 * @brief Destructeur de ActionPass
 */
ActionPass::~ActionPass(){}

/**
 * @brief méthode retournant le joueur actif
 * @return le joueur actif
 */
Player ActionPass::getActingPlayer(){
	return actingPlayer_;
}

/**
 * @brief Méthode mutatrice permettant d'éditer le joueur actif
 * @param actingPlayer le joueur à activer
 */
void ActionPass::setActingPlayer(Player actingPlayer){
	actingPlayer_ = actingPlayer;
}

/**
 * @brief Méthode permettant le passage d'une balle du actingPlayer_ à playerCible
 * @details On prend en compte la distance des deux joueurs et si le joueur actif est un Thrower ou non
 * @details Un joueur Thrower a plus de facilité à lancer sur des grandes distances (et à lancer le plus loin possible)
 * @param playerCible le joueur qui recevra (ou pas) la balle
 */
void ActionPass::doAction(Player playerCible){
	int diceRes;
		
	if(actingPlayer_.nextTo(playerCible){ //close pass
		
		diceRes = rollPassDices();
		if(diceRes > playerCible.getAgi()){ //fail
			passFail(playerCible);
		}else{ //success
			passSuccess(playerCible);
		}
	}else if(actingPlayer_.tileDist() >= 1 && actingPlayer_.tileDist() < 3){ //normal pass
		if(actingPlayer_.pass()){ //thrower
			receiveAct(-2);
		}else{ //normal
			receiveAct(0);
		}
	}else if(actingPlayer_.tileDist() >= 3 && actingPlayer_.tileDist() < 6 ){ //long pass
		if(actingPlayer_.pass()){ //thrower
			receiveAct(0);
		}else{ //normal
			receiveAct(2);
		}
	}else if (actingPlayer_.tileDist() >= 6 && actingPlayer_.tileDist() < 9 ){ //hail Mary
		if(actingPlayer_.pass()){ //thrower
			receiveAct(2);
		}else{ //normal
			std::cout<<"Trop loin!"<<std::endl;
			return;
		}
	}
	
	
}
/**
 * @brief Méthode qui fait que la passe à échoué
 * @details la balle appartiendra au joueur qui est censé la reçevoir avant de rebondir vers une case adjacente et devenir indépendant (voir méthode bounce())
 * @details Déclenche un turnover
 */
void ActionPass::passFail(){
		std::cout<<"Et il a raté le pass! Gah! Ces joueurs ne savent pas jouer ou quoi?!"<<std::endl;
		ball.setPlayer(actingPlayer_);
		ball.bounce();
		playerCible.turnover();
}

/**
 * @brief Méthode qui fait que la passe à... passé
 * @details la balle appartiendra au joueur qui l'a reçue
 */
void ActionPass::passSuccess(){
		ball.setPlayer(actingPlayer_);
		std::cout<<"Oh OH! Aww... Il a reçu la balle... Je voulais le voir rater comme ça on tape plus, mais bon, c'est vraie que Blood Bowl est un jeu de balle."<<std::endl;
}

/**
 * @brief Méthode qui lance un d6 deux fois
 * @return Un entier qui fait la SOMME de ces lancers
 */
int ActionPass::rollPassDices(){
	Dice d6(1, 6);
	int res;
	std::cout<<"Dés lancés!..."<<std::endl;
	res = d6.throwDiceSingle();
	res += d6.throwDiceSingle();
}

/**
 * @brief Méthode simulant la récupération d'une balle pas actingPlayer_
 * @details On prend en compte si le joueur actif est un Catcher ou non
 * @details Un joueur Catcher peut relancer sa première tentative ratée
 * @param modif entier qui permet de voir si la récupération est plus ou moins facile
 */
void ActionPass::receiveAct(int modif){
	diceRes = rollPassDices();
	diceRes += modif;
	if(diceRes > actingPlayer_.getAgi() && !actingPlayer_.catch()){ //fail, no reroll
		actingPlayer_.passFail();
	}else if(diceRes > actingPlayer_.getAgi() && actingPlayer_.catch()){ //fail, reroll
		std::cout<<"On va relancer ça! \n";
		diceRes = rollPassDices();
		if(diceRes > actingPlayer_.getAgi()){ //fail
			actingPlayer_.passFail();
		}else{ //success
			actingPlayer_.passSuccess();
		}
	}else{
		actingPlayer_.passSuccess();
	}
}