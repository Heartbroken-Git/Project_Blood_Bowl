/**
 * @file ActionFoul.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 16/10/2016
 * @brief Fichier hpp définissant l'action d'un joueur qui attaque un autre joueur
*/

#include <vector>
#include "ActionFoul.hpp"
#include "../Dice/Dice.hpp"

class Dice;

using namespace std;

/**
 * @brief Constructeur de ActionFoul
 * @param actingPlayer le joueur actif
 * @pre actingPlayer doit être un joueur de l'équipe jouant en jeu
 */
ActionFoul::ActionFoul(Player actingPlayer){
	actingPlayer_ = actingPlayer;
}

/**
 * @brief Destructeur de ActionFoul
 */
ActionFoul::~ActionFoul(){}

/**
 * @brief méthode retournant le joueur actif
 * @return le joueur actif
 */
Player ActionFoul::getActingPlayer(){
	return actingPlayer_;
}

/**
 * @brief méthode qui fait que oppoPlayer soit attaqué par actingPlayer_
 * @details deux d6 est lancé et si le résultat est supérieur à l'armure de oppoPlayer, ce dernier est blessé
 * @details si un double, actingPlayer_ est jeté du jeu par l'arbitre
 * @details le résultat du jet est ajouté par nombre de joueurs de l'équipe de actingPlayer_ autour d'oppoPlayer
 */
void ActionFoul::doAction(Player oppoPlayer){
	int result = 0;
	int stock;
	Dice d6(1,6);
	bool reff = false;
	
	if (actingPlayer_.nextTo(oppoPlayer)){
		result = d6.throwDiceSingle();
		stock = d6.throwDiceSingle();
		if(result == stock){
			reff = true;
		}
		result += stock;
		stock = oppoPlayer.oppoAdjac();
		result += stock;
		if(result > oppoPlayer.getAmr()){
			oppoPlayer.downed();
			std::cout<<"Aïe!"<<std::endl;
		}
		if(reff){
			actingPlayer_.setStatus(6);
			std::cout<<"Et l'arbitre l'a choppé! Fallait faire ça plus discrètement, voyons!"<<std::endl;
		}
		
	}else{
		std::cout<<actingPlayer_.getName()<<" est trop loin pour attaquer!"<<std::endl;
	}
	
}
