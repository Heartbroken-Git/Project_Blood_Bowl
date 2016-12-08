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
 */
NotPlayable::NotPlayable(){}


/**
 * @brief Destructeur de NotPlayable
 */
NotPlayable::~NotPlayable(){}


/**
 * @brief méthode qui change l'etat d'un joueur passé en mode jouable
 * @details NotPlayable ---> Fresh
 */
std::shared_ptr<Playability> NotPlayable::startPlaying(){
	return std::make_shared<Fresh>();
}

std::shared_ptr<Playability> NotPlayable::donePlaying(){}
std::shared_ptr<Playability> NotPlayable::GoForIt(){}
std::shared_ptr<Playability> NotPlayable::passer(){}
std::shared_ptr<Playability> NotPlayable::tackle(){}
std::shared_ptr<Playability> NotPlayable::blitz(){}
std::shared_ptr<Playability> NotPlayable::moving(){}
std::shared_ptr<Playability> NotPlayable::NotPlayableMovement(){}
std::shared_ptr<Playability> NotPlayable::NotPlayableTackle(){}
