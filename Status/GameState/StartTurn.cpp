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
StartTurn::StartTurn(Team equipe){
	equipe_ = equipe;
}

/**
 * @brief Destructeur de StartTurn
 */
StartTurn::~StartTurn(){}

/**
 * @brief méthode retournant l'équipe actif
 * @return l'équipe actif
 */
Team StartTurn::getEquipe(){
	return equipe_;
}

/**
 * @brief méthode qui change l'etat d'une équipe en mode jouable l'équipe actif
 * @details Normal Turn ---> End of Turn
 */

void StartTurn::endTurnNormal(){
	equipe_.etatFinTour();
}

/**
 * @brief méthode qui change l'etat d'une équipe en mode jouable l'équipe actif
 * @details Normal Turn ---> End of Turn (via un turnover)
 */
void StartTurn::turnover(){
	equipe_.etatFinTurnover();
}

void StartTurn::startTurn(){}

