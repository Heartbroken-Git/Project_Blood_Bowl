/**
 * @file ActionGoForIt.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 16/10/2016
 * @brief Fichier source de l'Action Go For It
 */

#include "ActionGoForIt.hpp"
#include "../Dice/Dice.hpp"

class Dice;

/**
 * @brief Constructeur de ActionGoForIt
 * @param actingPlayer le joueur exécutant l'action
 * @pre actingPlayer_ doit être un joueur effectivement sur le terrain
 */
ActionGoForIt::ActionGoForIt(Player actingPlayer) {
	actingPlayer_ = actingPlayer;
}

/**
 * @brief Destructeur de ActionGoForIt
 */
ActionGoForIt::~ActionGoForIt() {}

/**
 * @brief Méthode exécutant l'action Go For It
 * @details Lance le dé afin de voir si le joueur fait un échec critique, le cas échéant il glisse et met fin au tour
 */
void ActionGoForIt::doAction() {
	if(typeid(actingPlayer_.getPlayability()) == typeid(Moved)&&typeid(actingPlayer_.getWellbeing()) == typeid(Fresh)){
		Dice d6(1, 6);
		if (d6.throwDiceSingle() == 1) {
		//Mettre une annonce comme quoi ça a foiré ? Et une si ça passe ou pas ?
			actingPlayer_.etatATerre();
			game_.turnover(actingPlayer_);
			std::cout<<"Et il s'est cassé la face ! Ouch, le sol est bien glissant !"<<std::endl;
		}else{
			actingPlayer_.addMovement();
			actingPlayer_.etatGFI();
		}
	}
}

/**
 * @brief Accesseur de actingPlayer_
 * @return Retourne le joueur agissant
 */
Player ActionGoForIt::getActingPlayer() {
	return(actingPlayer_);
}
