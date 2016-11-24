/**
 * @file Healthy.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est bien en bonne état
*/

#include "Healthy.hpp"

using namespace std;

/**
 * @brief Constructeur de Healthy
 * @param joueur, le joueur concerné
 */
Healthy::Healthy(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Healthy
 */
Healthy::~Healthy(){}

Player Healthy::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur son dos
 * @details Healthy est maintenant Prone
 */
void Healthy::goProne(){
		player_.etatProne();
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur le ventre
 * @details Healthy est maintenant ATerre
 */
void Healthy::knockedDown(){
	player_.etatATerre;
}
 
 /**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details Healthy est maintenant KO
 */
 void Healthy::knockedOut(){
	 player_.etatKO();
 }
 
  /**
 * @brief méthode qui change l'etat d'un joueur qui viré du jeu
 * @details Healthy est maintenant hors du jeu
 */
 void Healthy::getOut(){
	 player_.etatOut();
 }
 
void Healthy::returnToGame(){}
void Healthy::getUp(){}
void Healthy::backToNormal(){}

