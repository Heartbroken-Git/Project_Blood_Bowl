#ifndef __PRONE_HPP__
#define __PRONE_HPP__
/**
 * @file Prone.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur lorsqu'il est à terre pas pas sur le ventre
*/

#include "Wellbeing.hpp"

class Prone : public virtual Wellbeing{
    public:
    Prone();
    ~Prone();
	std::shared_ptr<Wellbeing> getUp();
	std::shared_ptr<Wellbeing> knockedDown();
	std::shared_ptr<Wellbeing> knockedOut();
	std::shared_ptr<Wellbeing> getOut();


	std::shared_ptr<Wellbeing> backToNormal();
	std::shared_ptr<Wellbeing> goProne();
	std::shared_ptr<Wellbeing> returnToGame();

	
};

#endif

