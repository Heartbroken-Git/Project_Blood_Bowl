#ifndef __MOVED_HPP__
#define __MOVED_HPP__
/**
 * @file Moved.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur qui a bougé dans son tour, il peut maintenant soit langer la balle, soit faire un GoForIt, soit terminer son tour.
*/

#include "Playability.hpp"

class Moved : public virtual Playability{
    public:
    Moved();
    ~Moved();
	void passer();
	void donePlaying();
	void GoForIt();
	
};

#endif

