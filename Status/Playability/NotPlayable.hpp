#ifndef __NOTPLAYABLE_HPP__
#define __NOTPLAYABLE_HPP__
/**
 * @file NotPlayable.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui ne peut plus jouer ce tour ci.
*/

#include "Playability.hpp"
class NotPlayable : public virtual Playability{
    public:
    NotPlayable();
    ~NotPlayable();
	std::shared_ptr<Playability> startPlaying();

	std::shared_ptr<Playability> donePlaying(); 
	std::shared_ptr<Playability> tackle();
	std::shared_ptr<Playability> blitz();
	std::shared_ptr<Playability> moving();	
	std::shared_ptr<Playability> passer();
	std::shared_ptr<Playability> blitzMovement();
	std::shared_ptr<Playability> blitzTackle();
	std::shared_ptr<Playability> GoForIt();


};

#endif

