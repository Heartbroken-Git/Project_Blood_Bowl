#ifndef __FRESH_HPP__
#define __FRESH_HPP__
/**
 * @file Fresh.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui n'a pas encore fait d'action, et peut donc jouer.
*/

#include "Playability.hpp"
#include "../../Player/Player.hpp"
class Fresh : public virtual Playability{
    public:
    Fresh(Player player);
    ~Fresh();
	void donePlaying(); 
	void tackle();
	void blitz();
	void moving();	
	void passer();
	Player getPlayer();

	void blitzMovement();
	void blitzTackle();
	void GoForIt();
	void startPlaying();

	private:
	Player player_;	
};

#endif

