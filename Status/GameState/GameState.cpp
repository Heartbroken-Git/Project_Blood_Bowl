/**
 * @file GameState.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier cpp pour la classe virtuelle GameState
*/

#include "GameState.hpp"

using namespace std;

/**
 * @brief Constructeur de GameState
 * @param equipe l'equipe concerné
 */
GameState::GameState(){}

/**
 * @brief Destructeur de GameState
 */
GameState::~GameState(){}

std::shared_ptr<GameState> GameState::endTurnNormal(){}
std::shared_ptr<GameState> GameState::turnover(){}
std::shared_ptr<GameState> GameState::GameState(){}

