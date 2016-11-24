/**
 * @file EndTurn.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier cpp pour montrer qu'une equipe peut maintenant jouer
*/

#include "EndTurn.hpp"

using namespace std;

/**
 * @brief Constructeur de EndTurn
 * @param equipe l'equipe concerné
 */
EndTurn::EndTurn(Team equipe){
	equipe_ = equipe;
}

/**
 * @brief Destructeur de EndTurn
 */
EndTurn::~EndTurn(){}

/**
 * @brief méthode retournant l'équipe actif
 * @return l'équipe actif
 */
Team EndTurn::getEquipe(){
	return equipe_;
}

/**
 * @brief méthode qui change l'etat d'une équipe en mode non jouable l'équipe actif
 * @details End of Turn ---> Normal Turn
 */

void EndTurn::startTurn(){
	equipe_.etatDebTour();
}

void EndTurn::turnover(){}
void EndTurn::endTurnNormal(){}

