#ifndef __PLAYABILITY_HPP__
#define __PLAYABILITY_HPP__
/**
 * @file Playability.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur
*/


class Playability{
    public:
    Playability();
    ~Playability();
	virtual void passer()=0;
	virtual void moving()=0;
	virtual void tackle()=0;
	virtual void donePlaying()=0;
	virtual void GoForIt()=0;
	virtual void blitz()=0;
	virtual void blitzMovement()=0;
	virtual void blitzTackle()=0;
	virtual void donePlaying()=0;
	virtual void startPlaying()=0;
};

#endif

