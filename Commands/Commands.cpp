/*!
 * @file Commands.cpp
 * @author Elbert NYUNTING
 * @brief Classe Commands pour les commandes du jeu
 */

#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Commands.hpp"
using namespace std;
	
/*!
* @brief Constructeur de Commands
* 
*/
Commands::Commands(){}

~Commands(){}

/*
* @brief fuck, I'm lost
*/
void Commands::input(){
	std::string cmd;
	std::string cmd2;
	std::cout<<"Donnez une commande ! "<<endl;
	std::cin>>cmd;
	if((boost::iequals(cmd,"move")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd, ce qu'on va mettre en parametre quand on make funnel en bas 
		*/
		std::cout<<"Choisissez une direction ! "<<endl;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->move(cmd);		
		delete funnel;
	}
	   
	if((boost::iequals(cmd,"block")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd, ce qu'on va mettre en parametre quand on make funnel en bas  
		*/
		std::cout<<"Choisissez une victime ! "<<endl;
		std::cin>>cmd2;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd2 
		*/
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->tackle(cmd2);		
		delete funnel;
	}
	   
	   if((boost::iequals(cmd,"pass")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd, ce qu'on va mettre en parametre quand on make funnel en bas 
		*/
		std::cout<<"Choisissez un cible ! "<<endl;
		std::cin>>cmd2;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd2 
		*/
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->pass(cmd2);		
		delete funnel;
	}
	      
	if((boost::iequals(cmd,"foul")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd, ce qu'on va mettre en parametre quand on make funnel en bas  
		*/
		std::cout<<"Choisissez un cible ! "<<endl;
		std::cin>>cmd2;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd2 
		*/
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->foul(cmd2);		
		delete funnel;
	}
	   
	if((boost::iequals(cmd,"stand up")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd,ce qu'on va mettre en parametre quand on make funnel en bas  
		*/
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->standUp();		
		delete funnel;
	}
	   
   	if((boost::iequals(cmd,"done playing")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd, ce qu'on va mettre en parametre quand on make funnel en bas 
		*/
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->donePlaying();		
		delete funnel;
	}
	   
	if((boost::iequals(cmd,"go for it")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		/*
		* Choisir dans les deux equipes le joueur au nom de cmd, ce qu'on va mettre en parametre quand on make funnel en bas 
		*/
		std::cout<<"Choisissez une direction ! "<<endl;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		funnel->goForIt(cmd);		
		delete funnel;
	}
}
