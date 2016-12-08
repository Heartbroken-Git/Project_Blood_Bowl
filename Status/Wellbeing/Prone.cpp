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
Prone::Prone(){}


/**
 * @brief Destructeur de Prone
 */
Prone::~Prone(){}

/**
 * @brief méthode qui change l'etat d'un joueur qui se releve
 * @details Prone devient maintenant HalfHealthy (-3 mouvement, pas de tackle)
 */
std::shared_ptr<Wellbeing> Prone::getUp(){
	return std::make_shared<HalfHealthy>();
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details Prone devient maintenant Assomé
 */
std::shared_ptr<Wellbeing> Prone::knockedOut(){
	return std::make_shared<KO>();
}
/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur le ventre... encore
 * @details Prone devient maintenant ATerre
 */
std::shared_ptr<Wellbeing> Prone::knockedDown(){
	return std::make_shared<ATerre>();	
}

/**
 * @brief méthode qui change l'etat d'un joueur viré du jeu (mort, blessé grave, prison...)
 * @details Le joueur n'est plus en jeu
 */
std::shared_ptr<Wellbeing> Prone::getOut(){
	return std::make_shared<Out>();
}

std::shared_ptr<Wellbeing> Prone::goProne(){}
std::shared_ptr<Wellbeing> Prone::returnToGame(){}
std::shared_ptr<Wellbeing> Prone::backToNormal(){}

