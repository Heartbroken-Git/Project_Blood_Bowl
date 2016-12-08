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
		void input(String cmd);
		
		/*
		* @brief commencer UNE PARTIE DE BLOOD BOWL
		*/
		void startGame();

		void endTurn(Team team);



		/*
		* @brief choisir la race de l'équipe
		*/
		void chooseElf();
		void chooseOrc();
		void chooseHuman();

		/*
		* @brief choisir le paradigme du team voulu
		*/
		void chooseAgressive();
		void chooseBalanced();
		void chooseAgile();
	
		void teamName(String name);

}

#endif
