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
ATerre::ATerre(){}


/**
 * @brief Destructeur de ATerre
 */
ATerre::~ATerre(){}


/**
 * @brief méthode qui change l'etat d'un joueur qui se retourne sur son dos
 * @details ATerre devient maintenant Prone
 */
std::shared_ptr<Wellbeing> ATerre::goProne(){
	return new Prone;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details ATerre devient maintenant Assomé
 */
std::shared_ptr<Wellbeing> ATerre::knockedOut(){
	return new KO;
}

/**
 * @brief méthode qui change l'etat d'un joueur viré du jeu (mort, blessé grave, prison...)
 * @details Le joueur n'est plus en jeu
 */
std::shared_ptr<Wellbeing> ATerre::getOut(){
	return new Out;
}

std::shared_ptr<Wellbeing> ATerre::returnToGame(){}
std::shared_ptr<Wellbeing> ATerre::getUp(){}
std::shared_ptr<Wellbeing> ATerre::knockedDown(){}
std::shared_ptr<Wellbeing> ATerre::backToNormal(){}

