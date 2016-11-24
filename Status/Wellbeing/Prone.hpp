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
    Prone(Player player);
    ~Prone();
	void getUp();
	void knockedDown();
	void knockedOut();
	void getOut();
	Player getPlayer();

	void backToNormal();
	void goProne();
	void returnToGame();
	private:
	Player player_;	
	
};

#endif

