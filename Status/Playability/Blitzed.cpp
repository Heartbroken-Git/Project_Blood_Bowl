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
Blitzed::Blitzed(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Blitzed
 */
Blitzed::~Blitzed(Player player){}

Player Blitzed::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bougé
 * @details Blited ---> BlitzMoved
 */
void Blitzed::blitzMovement(){
	player_.etatBlitzMoved();
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur blitzé ayant bloqué
 * @details Blited ---> BlitzTackled
 */
void Blitzed::blitzTackle(){
	player_.etatBlitzTackle();
}

/**
 * @brief méthode qui change l'etat d'un joueur blitzé en mode joueur non jouable
 * @details Blited ---> DonePlaying
 */
void Blitzed::donePlaying(){
	player_.etatDonePlaying();
}

void Blitzed::tackle(){}
void Blitzed::blitz(){}
void Blitzed::moving(){}
void Blitzed::passer(){}
void Blitzed::GoForIt(){}
void Blitzed::startPlaying(){}
