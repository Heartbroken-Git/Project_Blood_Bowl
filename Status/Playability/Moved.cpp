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
Moved::Moved(){}


/**
 * @brief Destructeur de Moved
 */
Moved::~Moved(){}


/**
 * @brief méthode qui change l'etat d'un joueur Movedé en mode joueur non jouable
 * @details Moved ---> DonePlaying
 */
std::shared_ptr<Playability> Moved::donePlaying(){
	return std::make_shared<NotPlayable>();
}

/**
 * @brief méthode qui change l'etat d'un joueur Movedé en mode joueur non jouable
 * @details Moved ---> GFI
 */
std::shared_ptr<Playability> Moved::GoForIt(){
	return std::make_shared<GFI>();
}

/**
 * @brief méthode qui change l'etat d'un joueur Movedé en mode joueur non jouable
 * @details Moved ---> Played
 */
std::shared_ptr<Playability> Moved::passer(){
	return std::make_shared<Passed>();
}


std::shared_ptr<Playability> Moved::tackle(){}
std::shared_ptr<Playability> Moved::blitz(){}
std::shared_ptr<Playability> Moved::moving(){}
std::shared_ptr<Playability> Moved::startPlaying(){}
std::shared_ptr<Playability> Moved::MovedMovement(){}
std::shared_ptr<Playability> Moved::MovedTackle(){}
