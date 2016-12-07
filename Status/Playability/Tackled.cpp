/**
 * @file Tackled.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur qui Joue bien le jeu et fait violence envers les autres joueurs.
*/

#include "Tackled.hpp"

using namespace std;

/**
 * @brief Constructeur de Tackled
 * @param joueur, le joueur concerné
 */
Tackled::Tackled(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Tackled
 */
Tackled::~Tackled(){}

Player Tackled::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur Tackledé en mode joueur non jouable
 * @details Tackled ---> DonePlaying
 */
void Tackled::donePlaying(){
	player_.etatDonePlaying();
}

void Tackled::GoForIt(){}
void Tackled::passer(){}
void Tackled::tackle(){}
void Tackled::blitz(){}
void Tackled::moving(){}
void Tackled::startPlaying(){}
void Tackled::TackledMovement(){}
void Tackled::TackledTackle(){}
