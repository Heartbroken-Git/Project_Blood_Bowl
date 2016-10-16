/**
 * @file ActionGoForIt.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 16/10/2016
 * @brief Fichier source de l'Action Go For It
 */

#include "ActionGoForIt.hpp"

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
	Dice d6(1, 6);
	if (d6.throwDiceSingle() == 1) {
		//Mettre une annonce comme quoi ça a foiré ? Et une si ça passe ou pas ?
		actingPlayer_.downed();
		actingPlayer_.turnover();
	}
}

/**
 * @brief Accesseur de actingPlayer_
 * @return Retourne le joueur agissant
 */
Player ActionGoForIt::getActingPlayer() {
	return(actingPlayer_);
}