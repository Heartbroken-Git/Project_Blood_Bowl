#ifndef __KO_HPP__
#define __KO_HPP__
/**
 * @file KO.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur lorsqu'il est assomé et peut revenir après chaque mi-temps ou marquage de but
*/

#include "Wellbeing.hpp"
#include "../../Player/Player.hpp"
class KO : public virtual Wellbeing{
    public:
    	KO(Player player);
    	~KO();
	void returnToGame();
	Player getPlayer();

	void goProne();
	void getUp();
	void knockedDown();
	void knockedOut();
	void getOut();
	void backToNormal();
	private:
	Player player_;	
};

#endif
