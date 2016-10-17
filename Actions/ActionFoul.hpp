#ifndef __ACTIONFOUL_HPP__
#define __ACTIONFOUL_HPP__
/**
 * @file ActionFoul.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 16/10/2016
 * @brief Fichier hpp définissant l'action d'un joueur qui attaque un autre joueur
*/

#include <queue>
#include <vector>
#include "Actions.hpp"

class Actions;


class ActionFoul : public virtual Actions{
    public:
	ActionFoul(Player actingPlayer);
	~ActionFoul();
	void doAction(Player oppoPlayer);
	Player getActingPlayer();
	
	
    private:
	Player actingPlayer_;
};

#endif

