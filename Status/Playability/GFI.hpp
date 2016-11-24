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
#include "../../Player/Player.hpp"
class GFI : public virtual Playability{
    public:
    GFI(Player player);
    ~GFI();
	void donePlaying();
	Player getPlayer();


	void blitzMovement();
	void blitzTackle();
	void GoForIt();
	void startPlaying();
	void tackle();
	void blitz();
	void moving();	
	void passer();

	private:
	Player player_;	
};

#endif

