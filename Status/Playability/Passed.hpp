#ifndef __PASSED_HPP__
#define __PASSED_HPP__
/**
 * @file Passed.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a lancé la balle dans son tour, et donc ne peut plus jouer d'action.
*/

#include "Playability.hpp"

class Passed : public virtual Playability{
    public:
    Passed();
    ~Passed();
	void donePlaying();
	
};

#endif

