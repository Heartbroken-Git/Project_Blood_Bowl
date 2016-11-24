/**
 * @file Passed.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur qui tente de jouer le jeu et fait passer la balle. Un évenement rare.
*/

#include "Passed.hpp"

using namespace std;

/**
 * @brief Constructeur de Passed
 * @param joueur, le joueur concerné
 */
Passed::Passed(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Passed
 */
Passed::~Passed(){}

Player Passed::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur Passedé en mode joueur non jouable
 * @details Passed ---> DonePlaying
 */
void Passed::donePlaying(){
	player_.etatDonePlaying();
}

void Passed::GoForIt(){}
void Passed::passer(){}
void Passed::tackle(){}
void Passed::blitz(){}
void Passed::moving(){}
void Passed::startPlaying(){}
void Passed::PassedMovement(){}
void Passed::PassedTackle(){}
