#ifndef __GAMESTATE_HPP__
#define __GAMESTATE_HPP__
/**
 * @file GameState.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat d'un tour de jeu d'une equipe
*/


class GameState{
    public:
    GameState();
    ~GameState();
	virtual void startTurn()=0;
	virtual void endTurnNormal()=0;
	virtual void turnover()=0;
	
};

#endif

