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
class BlitzMoved : public virtual Playability{
    public:
    	BlitzMoved();
    	~BlitzMoved();
    	std::shared_ptr<Playability> GoForIt();
	std::shared_ptr<Playability> blitzTackle();
	std::shared_ptr<Playability> donePlaying();

	std::shared_ptr<Playability> passer();
	std::shared_ptr<Playability> blitzMovement();
	std::shared_ptr<Playability> blitz();
	std::shared_ptr<Playability> tackle();
	std::shared_ptr<Playability> startPlaying();
	std::shared_ptr<Playability> moving();

};

#endif

