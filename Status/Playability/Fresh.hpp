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
class Fresh : public virtual Playability{
    public:
    Fresh();
    ~Fresh();
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

