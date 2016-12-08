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
 */
Tackled::Tackled(){}


/**
 * @brief Destructeur de Tackled
 */
Tackled::~Tackled(){}


/**
 * @brief méthode qui change l'etat d'un joueur Tackledé en mode joueur non jouable
 * @details Tackled ---> DonePlaying
 */
std::shared_ptr<Playability> Tackled::donePlaying(){
	return std::make_shared<NotPlayable>();
}

std::shared_ptr<Playability> Tackled::GoForIt(){}
std::shared_ptr<Playability> Tackled::passer(){}
std::shared_ptr<Playability> Tackled::tackle(){}
std::shared_ptr<Playability> Tackled::blitz(){}
std::shared_ptr<Playability> Tackled::moving(){}
std::shared_ptr<Playability> Tackled::startPlaying(){}
std::shared_ptr<Playability> Tackled::TackledMovement(){}
std::shared_ptr<Playability> Tackled::TackledTackle(){}
