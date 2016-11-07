#ifndef __ACTIONPASS_HPP__
#define __ACTIONPASS_HPP__
/**
 * @file ActionPass.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 08/10/2016
 * @brief Fichier hpp définissant l'action de passer et reçevoir la balle (ainsi que le fait for probable de les rater)
*/
#include <queue>
#include <vector>
#include "../Game/Game.hpp"

class ActionPass : public Actions{
    public:
	ActionPass(Player actingPlayer, Game game);
	~ActionBlock();
	Player getActingPlayer();
	Game getGame();
	void setActingPlayer(Player actingPlayer);
	void doAction(Player playerCible);
	void passFail();
	int rollPassDices();
	void receiveAct(int modif);
	
    private:
    	Player actingPlayer_;
	Game game_;
};

#endif
