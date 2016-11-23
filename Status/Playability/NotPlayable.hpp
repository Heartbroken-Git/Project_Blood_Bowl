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
#include "../../Player/Player.hpp"
class NotPlayable : public virtual Playability{
    public:
    NotPlayable();
    ~NotPlayable();
	void startPlaying();
	Player getPlayer();

	private:
	Player player_;

};

#endif

