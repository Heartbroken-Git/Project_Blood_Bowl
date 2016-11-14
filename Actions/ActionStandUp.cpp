/**
 * @file ActionStandUp.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 16/10/2016
 * @brief Fichier hpp définissant l'action d'un joueur se relève
*/

#include <vector>
#include "ActionStandUp.hpp"

using namespace std;

/**
 * @brief Constructeur de ActionStandUp
 * @param actingPlayer le joueur actif
 * @pre actingPlayer doit être un joueur de l'équipe jouant en jeu
 */
ActionStandUp::ActionStandUp(Player actingPlayer){
	actingPlayer_ = actingPlayer;
}

/**
 * @brief Destructeur de ActionStandUp
 */
ActionStandUp::~ActionStandUp(){}

/**
 * @brief méthode retournant le joueur actif
 * @return le joueur actif
 */
Player ActionStandUp::getActingPlayer(){
	return actingPlayer_;
}

/**
 * @brief méthode qui fait relever un joueur qui est à terre
 * @details le status_ d'un Player est un integer tel que
 * @details 0 == debout, 1 == debout, -3 mouvement & !tackle, 2 == au sol, 3 == sur le ventre, 4 == KO, 5 == Mort, 6 == en reserve
 */
void ActionStandUp::doAction(){
	if (actingPlayer_.getStatus() == 2){
		actingPlayer_.setStatus(1);
		std::cout<<actingPlayer_.getName()<<" s'est relevé!"<<std::endl;
	}else{
		std::cout<<"Ce joueur n'est pas au sol!"<<std::endl;
		return;
	}
}
