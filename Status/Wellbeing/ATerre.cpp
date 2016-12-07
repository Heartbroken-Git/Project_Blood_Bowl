/**
 * @file ATerre.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est à terre sur le ventre
*/

#include "ATerre.hpp"

using namespace std;

/**
 * @brief Constructeur de ATerre
 * @param joueur, le joueur concerné
 */
ATerre::ATerre(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de ATerre
 */
ATerre::~ATerre(){}

Player ATerre::getPlayer(){
	return player_;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui se retourne sur son dos
 * @details ATerre devient maintenant Prone
 */
void ATerre::goProne(){
	player_.etatProne();
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details ATerre devient maintenant Assomé
 */
void ATerre::knockedOut(){
	player_.etatKO();
}

/**
 * @brief méthode qui change l'etat d'un joueur viré du jeu (mort, blessé grave, prison...)
 * @details Le joueur n'est plus en jeu
 */
void ATerre::getOut(){
	player_.etatOut();
}

void ATerre::returnToGame(){}
void ATerre::getUp(){}
void ATerre::knockedDown(){}
void ATerre::backToNormal(){}

