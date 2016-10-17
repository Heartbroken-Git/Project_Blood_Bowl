/**
 * @file ActionDodge.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 16/10/2016
 * @brief Fichier source de l'Action Dodge
 */
 
#include "ActionDodge.hpp"
#include "../Dice/Dice.hpp"

class Dice;
/**
 * @brief Constructeur de ActionDodge
 * @param actingPlayer le joueur exécutant l'action
 * @pre actingPlayer_ doit être un joueur effectivement sur le terrain
 */
ActionDodge::ActionDodge(Player actingPlayer) {
	actingPlayer_ = actingPlayer;
}

/**
 * @brief Destructeur de ActionGoForIt
 */
ActionDodge::~ActionDodge() {}

/**
 * @brief Méthode exécutant l'action Dodge
 * @details Lance le dé appliquant un modificateur lié au nombre de joueurs ennemis présent autour du joueur, la réussite dépend donc du modificateur et de l'agilité du joueur attaqué.
 * @details Si le test échoue le joueur doit alors tenter de bloquer l'attaque (renvoie sur ActionBlock).
 */
void ActionDodge::doAction() {
	unsigned int modifier = 1 + (0 - actingPlayer_.oppoAjac());
	Dice d6(1, 6);
	if (!((d6.throwDiceSingle() + modifier) >= 7 - actingPlayer_.getAG())) {
		actingPlayer_.downed();
	}
}

/**
 * @brief Accesseur de actingPlayer_
 * @return Retourne le joueur agissant
 */
Player ActionDodge::getActingPlayer() {
	return(actingPlayer_);
}
