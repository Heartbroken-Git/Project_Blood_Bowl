#ifndef __STARTTURN_HPP__
#define __STARTTURN_HPP__
/**
 * @file StartTurn.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat du tour de l'équipe. Ici l'équipe est bien en jeu.
*/

#include "GameState.hpp"
#include "../../Team/Team.hpp"

class StartTurn : public virtual GameState{
    public:
    StartTurn(Team equipe);
    ~StartTurn();
	void endTurnNormal();
	void turnover();
	Team getEquipe();

	void startTurn();	
	private:
	Team equipe_;
	
};

#endif

