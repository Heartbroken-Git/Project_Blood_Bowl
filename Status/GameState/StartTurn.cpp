/**
 * @file StartTurn.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier cpp pour montrer qu'une equipe peut maintenant jouer
*/

#include "StartTurn.hpp"

using namespace std;

/**
 * @brief Constructeur de StartTurn
 * @param equipe l'equipe concerné
 */
StartTurn::StartTurn(){}

/**
 * @brief Destructeur de StartTurn
 */
StartTurn::~StartTurn(){}


/**
 * @brief méthode qui change l'etat d'une équipe en mode jouable l'équipe actif
 * @details Normal Turn ---> End of Turn
 */

std::shared_ptr<GameState> StartTurn::endTurnNormal(){
	return std::make_shared<EndTurn>();
}

/**
 * @brief méthode qui change l'etat d'une équipe en mode jouable l'équipe actif
 * @details Normal Turn ---> End of Turn (via un turnover)
 */
std::shared_ptr<GameState> StartTurn::turnover(){
	return std::make_shared<EndTurn>();
}

std::shared_ptr<GameState> StartTurn::startTurn(){}

