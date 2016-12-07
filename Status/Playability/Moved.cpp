/**
 * @file Moved.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est en train de courtiser le dieu des dés et tente d'aller un poil plus loin
*/

#include "Moved.hpp"

using namespace std;

/**
 * @brief Constructeur de Moved
 * @param joueur, le joueur concerné
 */
Moved::Moved(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Moved
 */
Moved::~Moved(){}

Player Moved::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur Movedé en mode joueur non jouable
 * @details Moved ---> DonePlaying
 */
void Moved::donePlaying(){
	player_.etatDonePlaying();
}

/**
 * @brief méthode qui change l'etat d'un joueur Movedé en mode joueur non jouable
 * @details Moved ---> GFI
 */
void Moved::GoForIt(){
	player_.etatGFI();
}

/**
 * @brief méthode qui change l'etat d'un joueur Movedé en mode joueur non jouable
 * @details Moved ---> Played
 */
void Moved::passer(){
	player_.etatPassed();
}


void Moved::tackle(){}
void Moved::blitz(){}
void Moved::moving(){}
void Moved::startPlaying(){}
void Moved::MovedMovement(){}
void Moved::MovedTackle(){}
