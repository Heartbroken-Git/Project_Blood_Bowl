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
 * @param joueur, le joueur concerné
 */
BlitzTackled::BlitzTackled(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de BlitzTackled
 */
BlitzTackled::~BlitzTackled(){}

Player BlitzTackled::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bougé
 * @details BlitzTackled ---> BlitzMoved
 */
void BlitzTackled::blitzMovement(){
	player_.etatBlitzMoved();
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur non jouable
 * @details BlitzTackled ---> DonePlaying
 */
void BlitzTackled::donePlaying(){
	player_.etatDonePlaying();
}

void BlitzTackled::tackle(){}
void BlitzTackled::blitz(){}
void BlitzTackled::moving(){}
void BlitzTackled::passer(){}
void BlitzTackled::blitzTackle(){}
void BlitzTackled::GoForIt(){}
void BlitzTackled::startPlaying(){}

