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
#include "../../Player/Player.hpp"
class ATerre : public virtual Wellbeing{
    public:
    ATerre();
    ~ATerre();
	void goProne();
	void knockedOut();
	void getOut();
	Player getPlayer();

	void returnToGame();
	void getUp();
	void knockedDown();
	void backToNormal();
	private:
	Player player_;	
};

#endif

