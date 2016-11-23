#ifndef __BLITZTACKLED_HPP__
#define __BLITZTACKLED_HPP__
/**
 * @file BlitzTackled.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a bloqué lors de son blitz, ce qui lui permet de bouger encore plus.
*/

#include "Playability.hpp"

class BlitzTackled : public virtual Playability{
    public:
    BlitzTackled();
    ~BlitzTackled();
    void blitzMovement();
	void donePlaying();
	
};

#endif

