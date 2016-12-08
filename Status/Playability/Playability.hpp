#ifndef __PLAYABILITY_HPP__
#define __PLAYABILITY_HPP__
/**
 * @file Playability.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de jouabilité d'un joueur
*/

#include <sstream>
#include <memory>
#include <iostream>

class Playability{
    public:
    Playability();
    ~Playability();
	virtual std::shared_ptr<Playability> passer()=0; //etatPassed()
	virtual std::shared_ptr<Playability> moving()=0; //etatMoved()
	virtual std::shared_ptr<Playability> tackle()=0; //etatTackle()
	virtual std::shared_ptr<Playability> GoForIt()=0; //etatGFI()
	virtual std::shared_ptr<Playability> blitz()=0; //etatBlitz()
	virtual std::shared_ptr<Playability> blitzMovement()=0; //etatBlitzMoved()
	virtual std::shared_ptr<Playability> blitzTackle()=0; //etatBlitzTackle()
	virtual std::shared_ptr<Playability> donePlaying()=0; //etatDonePlaying()
	virtual std::shared_ptr<Playability> startPlaying()=0; //etatFresh()
};

#endif

