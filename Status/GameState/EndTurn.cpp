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
EndTurn::EndTurn(){}

/**
 * @brief Destructeur de EndTurn
 */
EndTurn::~EndTurn(){}

/**
 * @brief méthode qui change l'etat d'une équipe en mode non jouable l'équipe actif
 * @details End of Turn ---> Normal Turn
 */

std::shared_ptr<GameState> EndTurn::startTurn(){
	return new StartTurn;
}

std::shared_ptr<GameState> EndTurn::turnover(){}
std::shared_ptr<GameState> EndTurn::endTurnNormal(){}

