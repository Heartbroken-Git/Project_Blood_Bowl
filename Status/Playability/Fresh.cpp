/**
 * @file Fresh.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est bien fraiche pour faire des actions, pour equipe et patrie
*/

#include "Fresh.hpp"

using namespace std;

/**
 * @brief Constructeur de Fresh
 * @param joueur, le joueur concerné
 */
Fresh::Fresh(){}


/**
 * @brief Destructeur de Fresh
 */
Fresh::~Fresh(){}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur perimé (non jouable)
 * @details Fresh ---> DonePlaying
 */
std::shared_ptr<Playability> Fresh::donePlaying(){
	return std::make_shared<NotPlayable>();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui a bloqué
 * @details Fresh ---> Tackled
 */
std::shared_ptr<Playability> Fresh::tackle(){
	return std::make_shared<Tackled>();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui est en blitz, prêt pour tout defoncer
 * @details Fresh ---> Blitzed
 */
std::shared_ptr<Playability> Fresh::blitz(){
	return std::make_shared<Blitzed>();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui est en mouvement
 * @details Fresh ---> Moved
 */
std::shared_ptr<Playability> Fresh::moving(){
	return std::make_shared<Moved>();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui a passé la balle
 * @details Fresh ---> Passed
 */
std::shared_ptr<Playability> Fresh::passer(){
	return std::make_shared<Passed>();
}

std::shared_ptr<Playability> Fresh::blitzMovement(){}
std::shared_ptr<Playability> Fresh::blitzTackle(){}
std::shared_ptr<Playability> Fresh::GoForIt(){}
std::shared_ptr<Playability> Fresh::startPlaying(){}


