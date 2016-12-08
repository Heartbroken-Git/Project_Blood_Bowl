#ifndef __GAMESTATE_HPP__
#define __GAMESTATE_HPP__
/**
 * @file GameState.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat d'un tour de jeu d'une equipe
*/

#include <sstream>
#include <memory>
#include <iostream>

class GameState{
    public:
    GameState();
    ~GameState();
	virtual std::shared_ptr<GameState> startTurn()=0; //etatFinTour()
	virtual std::shared_ptr<GameState> endTurnNormal()=0; //etatFinTurnover()
	virtual std::shared_ptr<GameState> turnover()=0; //etatDebTour()
	
	
};

#endif

