/**
 * @file BlitzTackled.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur a blitzé dans son tour
*/

#include "BlitzTackled.hpp"

using namespace std;

/**
 * @brief Constructeur de BlitzTackled
 */
BlitzTackled::BlitzTackled(){}


/**
 * @brief Destructeur de BlitzTackled
 */
BlitzTackled::~BlitzTackled(){}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bougé
 * @details BlitzTackled ---> BlitzMoved
 */
std::shared_ptr<Playability> BlitzTackled::blitzMovement(){
	return new BlitzMoved;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur non jouable
 * @details BlitzTackled ---> DonePlaying
 */
std::shared_ptr<Playability> BlitzTackled::donePlaying(){
	return new NotPlayable;
}

std::shared_ptr<Playability> BlitzTackled::tackle(){}
std::shared_ptr<Playability> BlitzTackled::blitz(){}
std::shared_ptr<Playability> BlitzTackled::moving(){}
std::shared_ptr<Playability> BlitzTackled::passer(){}
std::shared_ptr<Playability> BlitzTackled::blitzTackle(){}
std::shared_ptr<Playability> BlitzTackled::GoForIt(){}
std::shared_ptr<Playability> BlitzTackled::startPlaying(){}

