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
#include "../../Player/Player.hpp"
class Blitzed : public virtual Playability{
    public:
    Blitzed();
    ~Blitzed();
    void blitzMovement();
	void blitzTackle();
	void donePlaying();
	Player getPlayer();

	private:
	Player player_;	
};

#endif

