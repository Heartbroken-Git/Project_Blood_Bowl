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
BlitzMoved::BlitzMoved(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de BlitzMoved
 */
BlitzMoved::~BlitzMoved(Player player){}

Player BlitzMoved::getPlayer(){
	return player_;
}



/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bloqué
 * @details BlitzedMoved ---> BlitzTackled
 */
void BlitzMoved::blitzTackle(){
	player_.etatBlitzTackle();
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur non jouable
 * @details BlitzMoved ---> DonePlaying
 */
void BlitzMoved::donePlaying(){
	player_.etatDonePlaying();
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé ayant bougé au maximum en mode GFI 
 * @details BlitzMoved ---> GFI
 */
void BlitzMoved::GpForIt(){
	player_.etatGoForIt();
}

void BlitzMoved::tackle(){}
void BlitzMoved::blitz(){}
void BlitzMoved::moving(){}
void BlitzMoved::passer(){}
void BlitzMoved::blitzMovement(){}
void BlitzMoved::startPlaying(){}
