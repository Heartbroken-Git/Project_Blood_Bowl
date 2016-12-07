/**
 * @file NotPlayable.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur a fait tou ce qu'il peut faire et est donc injouable.
*/

#include "NotPlayable.hpp"

using namespace std;

/**
 * @brief Constructeur de NotPlayable
 * @param joueur, le joueur concerné
 */
NotPlayable::NotPlayable(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de NotPlayable
 */
NotPlayable::~NotPlayable(){}

Player NotPlayable::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur passé en mode jouable
 * @details NotPlayable ---> Fresh
 */
void NotPlayable::startPlaying(){
	player_.etatFresh();
}

void NotPlayable::donePlaying(){}
void NotPlayable::GoForIt(){}
void NotPlayable::passer(){}
void NotPlayable::tackle(){}
void NotPlayable::blitz(){}
void NotPlayable::moving(){}
void NotPlayable::NotPlayableMovement(){}
void NotPlayable::NotPlayableTackle(){}
