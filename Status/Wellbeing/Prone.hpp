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
#include "../../Player/Player.hpp"
class Prone : public virtual Wellbeing{
    public:
    Prone();
    ~Prone();
	void getUp()=0;
	void knockedDown()=0;
	void knockedOut()=0;
	void getOut()=0;
	Player getPlayer();

	void backToNormal();
	void goProne();
	void returnToGame();
	private:
	Player player_;	
	
};

#endif

