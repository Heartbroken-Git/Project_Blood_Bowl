#ifndef __WELLBEING_HPP__
#define __WELLBEING_HPP__
/**
 * @file Wellbeing.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur
*/

class Wellbeing{
    public:
    Wellbeing();
    ~Wellbeing();
	virtual void goProne()=0;
	virtual void getUp()=0;
	virtual void knockedDown()=0;
	virtual void knockedOut()=0;
	virtual void getOut()=0;
	virtual void returnToGame()=0;
	virtual void backToNormal()=0;
	
};

#endif

