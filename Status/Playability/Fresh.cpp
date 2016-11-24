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
Fresh::Fresh(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Fresh
 */
Fresh::~Fresh(){}

Player Fresh::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur perimé (non jouable)
 * @details Fresh ---> DonePlaying
 */
void Fresh::donePlaying(){
	player_.etatDonePlaying();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui a bloqué
 * @details Fresh ---> Tackled
 */
void Fresh::tackle(){
	player_.etatTackle();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui est en blitz, prêt pour tout defoncer
 * @details Fresh ---> Blitzed
 */
void Fresh::blitz(){
	player_.etatBlitz();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui est en mouvement
 * @details Fresh ---> Moved
 */
void Fresh::moving(){
	player_.etatMoved();
}

/**
 * @brief méthode qui change l'etat d'un joueur fraiche en mode joueur qui a passé la balle
 * @details Fresh ---> Passed
 */
void Fresh::passer(){
	player_.etatPassed();
}

void Fresh::blitzMovement(){}
void Fresh::blitzTackle(){}
void Fresh::GoForIt(){}
void Fresh::startPlaying(){}


