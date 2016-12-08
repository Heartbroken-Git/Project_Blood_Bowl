#ifndef __GFI_HPP__
#define __GFI_HPP__
/**
 * @file GFI.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a fait un GoForIt, et peut donc tenter de bouger jusqu'à deux cases en plus
*/

#include "Playability.hpp"
class GFI : public virtual Playability{
    public:
    GFI();
    ~GFI();
	std::shared_ptr<Playability> donePlaying();


	std::shared_ptr<Playability> blitzMovement();
	std::shared_ptr<Playability> blitzTackle();
	std::shared_ptr<Playability> GoForIt();
	std::shared_ptr<Playability> startPlaying();
	std::shared_ptr<Playability> tackle();
	std::shared_ptr<Playability> blitz();
	std::shared_ptr<Playability> moving();	
	std::shared_ptr<Playability> passer();

};

#endif

