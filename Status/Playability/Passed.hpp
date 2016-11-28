#ifndef __PASSED_HPP__
#define __PASSED_HPP__
/**
 * @file Passed.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a lancé la balle dans son tour, et donc ne peut plus jouer d'action.
*/

#include "Playability.hpp"
#include "../../Player/Player.hpp"
class Passed : public virtual Playability{
    public:
    Passed(Player player);
    ~Passed();
	void donePlaying();
	Player getPlayer();

	void tackle();
	void blitz();
	void moving();	
	void passer();
	void blitzMovement();
	void blitzTackle();
	void GoForIt();
	void startPlaying();

	private:
	Player player_;
	
};

#endif
