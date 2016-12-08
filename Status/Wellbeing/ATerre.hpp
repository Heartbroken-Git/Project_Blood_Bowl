#ifndef __ATERRE_HPP__
#define __ATERRE_HPP__
/**
 * @file ATerre.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur lorsqu'il est à terre et sur le ventre
*/

#include "Wellbeing.hpp"

class ATerre : public virtual Wellbeing{
    public:
    ATerre();
    ~ATerre();
	std::shared_ptr<Wellbeing> goProne();
	std::shared_ptr<Wellbeing> knockedOut();
	std::shared_ptr<Wellbeing> getOut();

	std::shared_ptr<Wellbeing> returnToGame();
	std::shared_ptr<Wellbeing> getUp();
	std::shared_ptr<Wellbeing> knockedDown();
	std::shared_ptr<Wellbeing> backToNormal();

};

#endif

