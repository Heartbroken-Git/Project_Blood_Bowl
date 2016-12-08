#ifndef __WELLBEING_HPP__
#define __WELLBEING_HPP__
/**
 * @file Wellbeing.hpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 23/11/2016
 * @brief Fichier hpp définissant l'etat de santé d'un joueur
*/

#include <sstream>
#include <memory>
#include <iostream>

class Wellbeing{
    public:
    Wellbeing() {}
    ~Wellbeing(){}
	virtual std::shared_ptr<Wellbeing> goProne()=0; //etatProne()
	virtual std::shared_ptr<Wellbeing> getUp()=0; //etatHalfHealthy()
	virtual std::shared_ptr<Wellbeing> knockedDown()=0; //etatATerre()
	virtual std::shared_ptr<Wellbeing> knockedOut()=0; //etatKO()
	virtual std::shared_ptr<Wellbeing> getOut()=0; //etatOut()
	virtual std::shared_ptr<Wellbeing> returnToGame()=0; //etatHealthy()
	virtual std::shared_ptr<Wellbeing> backToNormal()=0; //etatHealthy()
	
};

#endif

