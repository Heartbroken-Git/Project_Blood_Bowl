#ifndef __HEALTHY_HPP__
#define __HEALTHY_HPP__
/**
 * @file Healthy.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur lorsqu'il est parfaitement en bonne etat. Jouable et pret a recevoir des coups.
*/

#include "Wellbeing.hpp"
#include "../../Player/Player.hpp"
class Healthy : public virtual Wellbeing{
    public:
    Healthy();
    ~Healthy();
	void goProne();
	void knockedDown();
	void knockedOut();
	void getOut();
	Player getPlayer();

	void returnToGame();
	void getUp();
	void backToNormal();
	private:
	Player player_;
	
};

#endif

