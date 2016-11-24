/**
 * @file Prone.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est à terre sur le dow, donc pas vulnérable
*/

#include "Prone.hpp"

using namespace std;

/**
 * @brief Constructeur de Prone
 * @param joueur, le joueur concerné
 */
Prone::Prone(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Prone
 */
Prone::~Prone(){}

Player Prone::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui se releve
 * @details Prone devient maintenant HalfHealthy (-3 mouvement, pas de tackle)
 */
void Prone::getUp(){
	player_.etatHalfHealthy();	
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details Prone devient maintenant Assomé
 */
void Prone::knockedOut(){
	player_.etatKO();
}
/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur le ventre... encore
 * @details Prone devient maintenant ATerre
 */
void Prone::knockedDown(){
	player.etatATerre();	
}

/**
 * @brief méthode qui change l'etat d'un joueur viré du jeu (mort, blessé grave, prison...)
 * @details Le joueur n'est plus en jeu
 */
void Prone::getOut(){
	player_.etatOut();
}

void Prone::goProne(){}
void Prone::returnToGame(){}
void Prone::backToNormal(){}

