#ifndef __BLITZED_HPP__
#define __BLITZED_HPP__
/**
 * @file Blitzed.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a blitzé au début de son tour, et toutes les choses merveilleuses qui vont avec...
*/

#include "Playability.hpp"
class Blitzed : public virtual Playability{
    public:
    Blitzed();
    ~Blitzed();
    	std::shared_ptr<Playability> blitzMovement();
	std::shared_ptr<Playability> blitzTackle();
	std::shared_ptr<Playability> donePlaying();
	

	std::shared_ptr<Playability> tackle();
	std::shared_ptr<Playability> blitz();
	std::shared_ptr<Playability> moving();	
	std::shared_ptr<Playability> passer();	
	std::shared_ptr<Playability> GoForIt();
	std::shared_ptr<Playability> startPlaying();

};

#endif

