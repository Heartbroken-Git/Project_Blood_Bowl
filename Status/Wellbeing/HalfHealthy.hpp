#ifndef __HALFHEALTHY_HPP__
#define __HALFHEALTHY_HPP__
/**
 * @file HalfHealthy.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur lorsqu'il vient de se relever
*/

#include "Wellbeing.hpp"

class HalfHealthy : public virtual Wellbeing{
    public:
    HalfHealthy();
    ~HalfHealthy();
	std::shared_ptr<Wellbeing> goProne();
	std::shared_ptr<Wellbeing> knockedDown();
	std::shared_ptr<Wellbeing> knockedOut();
	std::shared_ptr<Wellbeing> getOut();
	std::shared_ptr<Wellbeing> backToNormal();


	std::shared_ptr<Wellbeing> returnToGame();
	std::shared_ptr<Wellbeing> getUp();

};

#endif

