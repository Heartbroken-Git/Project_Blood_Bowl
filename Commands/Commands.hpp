#ifndef __FUNNEL_HPP__
#define __FUNNEL_HPP__
/*!
 * @file Commands.hpp
 * @author Elbert NYUNTING
 * @brief classe commande qui lit en input les commande du coach
 */
 
#include <iostream>
#include <string>
#include "Funnel.hpp"
using namespace std;
class Commands{
	private:
		Funnel funnel_;
	
	public:
		Commands();
		~Commands();
		/*
		* @brief Méthode qui lit ce qui est écrit sur le String et éxécute les méthodes Funnel correspondant
		* @warning il faut bien écrire
		*/
		void input();				
}

#endif
