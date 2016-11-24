#ifndef __BLITZMOVED_HPP__
#define __BLITZMOVED_HPP__
/**
 * @file BlitzMoved.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a bougé lors de son blitz, ce qui lui permet de bloquer un adversaire et de bouger encore plus.
*/

#include "Playability.hpp"
#include "../../Player/Player.hpp"
class BlitzMoved : public virtual Playability{
    public:
    	BlitzMoved(Player player);
    	~BlitzMoved();
    	void GoForIt();
	void blitzTackle();
	void donePlaying();
	Player getPlayer();

	void passer();
	void blitzMovement();
	void blitz();
	void tackle();
	void startPlaying();
	void moving();

	private:
	Player player_;	
};

#endif

