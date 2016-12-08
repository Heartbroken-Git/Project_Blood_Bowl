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
GFI::GFI(){}


/**
 * @brief Destructeur de GFI
 */
GFI::~GFI(){}

/**
 * @brief méthode qui change l'etat d'un joueur GFIé en mode joueur non jouable
 * @details GoForIt ---> DonePlaying
 */
std::shared_ptr<Playability> GFI::donePlaying(){
	return std::make_shared<NotPlayable>();
}

std::shared_ptr<Playability> GFI::tackle(){}
std::shared_ptr<Playability> GFI::blitz(){}
std::shared_ptr<Playability> GFI::moving(){}
std::shared_ptr<Playability> GFI::passer(){}
std::shared_ptr<Playability> GFI::GoForIt(){}
std::shared_ptr<Playability> GFI::startPlaying(){}
std::shared_ptr<Playability> GFI::GFIMovement(){}
std::shared_ptr<Playability> GFI::GFITackle(){}
