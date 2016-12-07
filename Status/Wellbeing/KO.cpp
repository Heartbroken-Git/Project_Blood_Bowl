/**
 * @file KO.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est assomé, et peut (peut etre) revenir en jeu
*/

#include "KO.hpp"

using namespace std;

/**
 * @brief Constructeur de KO
 * @param joueur, le joueur concerné
 */
KO::KO(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de KO
 */
KO::~KO(){}

Player KO::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui retourne en jeu
 * @details Ko est maintenant Healthy
 */
void KO::returnToGame(){
	player_.etatHealthy();	
}

void KO::getUp(){}
void KO::knockedOut(){}
void KO::knockedDown(){}
void KO::getOut(){}
void KO::goProne(){}
void KO::backToNormal(){}

