/**
 * @file Blitzed.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur a blitzé dans son tour
*/

#include "Blitzed.hpp"

using namespace std;

/**
 * @brief Constructeur de Blitzed
 * @param joueur, le joueur concerné
 */
Blitzed::Blitzed(){}


/**
 * @brief Destructeur de Blitzed
 */
Blitzed::~Blitzed(){}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bougé
 * @details Blited ---> BlitzMoved
 */
std::shared_ptr<Playability> Blitzed::blitzMovement(){
	return new Moved;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bloqué
 * @details Blited ---> BlitzTackled
 */
std::shared_ptr<Playability> Blitzed::blitzTackle(){
	return new Tackled;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur non jouable
 * @details Blited ---> DonePlaying
 */
std::shared_ptr<Playability> Blitzed::donePlaying(){
	return new NotPlayable();
}

std::shared_ptr<Playability> Blitzed::tackle(){}
std::shared_ptr<Playability> Blitzed::blitz(){}
std::shared_ptr<Playability> Blitzed::moving(){}
std::shared_ptr<Playability> Blitzed::passer(){}
std::shared_ptr<Playability> Blitzed::GoForIt(){}
std::shared_ptr<Playability> Blitzed::startPlaying(){}
