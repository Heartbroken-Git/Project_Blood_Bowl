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
 */
Passed::Passed(){}


/**
 * @brief Destructeur de Passed
 */
Passed::~Passed(){}

/**
 * @brief méthode qui change l'etat d'un joueur Passedé en mode joueur non jouable
 * @details Passed ---> DonePlaying
 */
std::shared_ptr<Playability> Passed::donePlaying(){
	return new NotPlayable;
}

std::shared_ptr<Playability> Passed::GoForIt(){}
std::shared_ptr<Playability> Passed::passer(){}
std::shared_ptr<Playability> Passed::tackle(){}
std::shared_ptr<Playability> Passed::blitz(){}
std::shared_ptr<Playability> Passed::moving(){}
std::shared_ptr<Playability> Passed::startPlaying(){}
std::shared_ptr<Playability> Passed::PassedMovement(){}
std::shared_ptr<Playability> Passed::PassedTackle(){}
