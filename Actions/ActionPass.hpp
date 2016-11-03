#ifndef __ACTIONPASS_HPP__
#define __ACTIONPASS_HPP__
/**
 * @file ActionPass.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 08/10/2016
 * @brief Fichier hpp définissant l'action de passer et reçevoir la balle (ainsi que le fait fort probable de les rater)
*/
#include <queue>
#include <vector>
#include "Actions.hpp"
#include "../Player/Player.hpp"
#include "../Game/Game.hpp"

class Actions;
class Player;

class ActionPass : public virtual Actions{
    public:
	ActionPass(Player actingPlayer, Game game);
	~ActionPass();
	Player getActingPlayer();
	Game getGame();
	void setActingPlayer(Player actingPlayer);
	void doAction(Player playerCible);
	void passFail(Player player);
	void passSuccess(Player player);
	unsigned int rollPassDices();
	void receiveAct(int modif, Player player);
	
    private:
    	Player actingPlayer_;
	Game game_;
};

#endif
