#ifndef __TACKLED_HPP__
#define __TACKLED_HPP__
/**
 * @file Tackled.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a tenté de bloquer un joueur adverse, il ne peut plus rien faire.
*/

#include "Playability.hpp"

class Tackled : public virtual Playability{
    public:
    	Tackled();
    	~Tackled();
	std::shared_ptr<Playability> donePlaying();

	std::shared_ptr<Playability> tackle();
	std::shared_ptr<Playability> blitz();
	std::shared_ptr<Playability> moving();	
	std::shared_ptr<Playability> passer();
	std::shared_ptr<Playability> blitzMovement();
	std::shared_ptr<Playability> blitzTackle();
	std::shared_ptr<Playability> GoForIt();
	std::shared_ptr<Playability> startPlaying();
	
};

#endif

