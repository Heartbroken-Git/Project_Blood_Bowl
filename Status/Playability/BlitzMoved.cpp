/**
 * @file BlitzMoved.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur a blitzé dans son tour
*/

#include "BlitzMoved.hpp"

using namespace std;

/**
 * @brief Constructeur de BlitzMoved
 * @param joueur, le joueur concerné
 */
BlitzMoved::BlitzMoved(){}


/**
 * @brief Destructeur de BlitzMoved
 */
BlitzMoved::~BlitzMoved(){}


/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bloqué
 * @details BlitzedMoved ---> BlitzTackled
 */
std::shared_ptr<Playability> BlitzMoved::blitzTackle(){
	return new BlitzTackled;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur non jouable
 * @details BlitzMoved ---> DonePlaying
 */
std::shared_ptr<Playability> BlitzMoved::donePlaying(){
	return new NotPlayable;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé ayant bougé au maximum en mode GFI 
 * @details BlitzMoved ---> GFI
 */
std::shared_ptr<Playability> BlitzMoved::GpForIt(){
	return new GFI;
}

std::shared_ptr<Playability> BlitzMoved::tackle(){}
std::shared_ptr<Playability> BlitzMoved::blitz(){}
std::shared_ptr<Playability> BlitzMoved::moving(){}
std::shared_ptr<Playability> BlitzMoved::passer(){}
std::shared_ptr<Playability> BlitzMoved::blitzMovement(){}
std::shared_ptr<Playability> BlitzMoved::startPlaying(){}
