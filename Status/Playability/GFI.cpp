/**
 * @file GFI.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est en train de courtiser le dieu des dés et tente d'aller un poil plus loin
*/

#include "GFI.hpp"

using namespace std;

/**
 * @brief Constructeur de GFI
 * @param joueur, le joueur concerné
 */
GFI::GFI(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de GFI
 */
GFI::~GFI(){}

Player GFI::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur GFIé en mode joueur non jouable
 * @details GoForIt ---> DonePlaying
 */
void GFI::donePlaying(){
	player_.etatDonePlaying();
}

void GFI::tackle(){}
void GFI::blitz(){}
void GFI::moving(){}
void GFI::passer(){}
void GFI::GoForIt(){}
void GFI::startPlaying(){}
void GFI::GFIMovement(){}
void GFI::GFITackle(){}
