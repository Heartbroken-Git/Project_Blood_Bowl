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
	void goProne();
	void knockedDown();
	void knockedOut();
	void getOut();
	void backToNormal();
	
};

#endif

