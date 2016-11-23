#ifndef __ENDTURN_HPP__
#define __ENDTURN_HPP__
/**
 * @file EndTurn.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat du tour de l'équipe. Ici l'équipe n'est plus en jeu.
*/

#include "GameState.hpp"
#include "../../Team/Team.hpp"

class EndTurn : public virtual GameState{
    public:
    EndTurn();
    ~EndTurn();
	void startTurn();
	Team getEquipe();
	
	private:
	Team equipe_;
};

#endif

