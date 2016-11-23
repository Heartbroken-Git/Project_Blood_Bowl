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
#include "../../Player/Player.hpp"

class Tackled : public virtual Playability{
    public:
    Tackled();
    ~Tackled();
	void donePlaying();
	Player getPlayer();

	private:
	Player player_;	
	
};

#endif

