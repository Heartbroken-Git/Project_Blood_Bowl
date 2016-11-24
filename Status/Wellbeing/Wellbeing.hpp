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
	virtual void goProne()=0; //etatProne()
	virtual void getUp()=0; //etatHalfHealthy()
	virtual void knockedDown()=0; //etatATerre()
	virtual void knockedOut()=0; //etatKO()
	virtual void getOut()=0; //etatOut()
	virtual void returnToGame()=0; //etatHealthy()
	virtual void backToNormal()=0; //etatHealthy()
	
};

#endif

