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
class Healthy : public virtual Wellbeing{
    public:
    Healthy();
    ~Healthy();
	std::shared_ptr<Wellbeing> goProne();
	std::shared_ptr<Wellbeing> knockedDown();
	std::shared_ptr<Wellbeing> knockedOut();
	std::shared_ptr<Wellbeing> getOut();


	std::shared_ptr<Wellbeing> returnToGame();
	std::shared_ptr<Wellbeing> getUp();
	std::shared_ptr<Wellbeing> backToNormal();

};

#endif

