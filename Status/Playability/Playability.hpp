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
	virtual void passer()=0; //etatPassed()
	virtual void moving()=0; //etatMoved()
	virtual void tackle()=0; //etatTackle()
	virtual void GoForIt()=0; //etatGFI()
	virtual void blitz()=0; //etatBlitz()
	virtual void blitzMovement()=0; //etatBlitzMoved()
	virtual void blitzTackle()=0; //etatBlitzTackle()
	virtual void donePlaying()=0; //etatDonePlaying()
	virtual void startPlaying()=0; //etatFresh()
};

#endif

