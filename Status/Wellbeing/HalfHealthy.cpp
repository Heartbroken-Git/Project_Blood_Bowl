/**
 * @file HalfHealthy.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est à terre sorti du jeu. Etat puits, donc une fois sorti, le joueur ne revient plus!
*/

#include "HalfHealthy.hpp"

using namespace std;

/**
 * @brief Constructeur de HalfHealthy
 * @param joueur, le joueur concerné
 */
HalfHealthy::HalfHealthy(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de HalfHealthy
 */
HalfHealthy::~HalfHealthy(){}

Player HalfHealthy::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur son dos
 * @details HalfHealthy est maintenant Prone
 */
void HalfHealthy::goProne(){
		player_.etatProne();
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur le ventre
 * @details HalfHealthy est maintenant ATerre
 */
void HalfHealthy::knockedDown(){
	player_.etatATerre;
}
 
 /**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details HalfHealthy est maintenant KO
 */
 void HalfHealthy::knockedOut(){
	 player_.etatKO();
 }
 
  /**
 * @brief méthode qui change l'etat d'un joueur qui viré du jeu
 * @details HalfHealthy est maintenant hors du jeu
 */
 void HalfHealthy::getOut(){
	 player_.etatOut();
 }
 
   /**
 * @brief méthode qui change l'etat d'un joueur qui a regagné son soufle et bien actif
 * @details HalfHealthy est maintenant Healthy
 */
void HalfHealthy::backToNormal(){
	player_.etatHealthy();
}

void HalfHealthy::returnToGame(){}
void HalfHealthy::getUp(){}


