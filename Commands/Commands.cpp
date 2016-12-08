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
Commands::Commands(Game game){
	game_ = game;
}

~Commands(){}

/*
* @brief méthode qui lie l'utilisateur avec le jeu
*/
void Commands::input(){
	std::string cmd;
	std::string cmd2;
	std::cout<<"Donnez une commande ! "<<endl;
	std::cin>>cmd;
	if((boost::iequals(cmd,"move")){
		std::shared_ptr<Player> actor;
		
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		
		std::cout<<"Choisissez une direction ! "<<endl;
		std::cin>>cmd;
		funnel->move(cmd);		
		delete funnel;
	}
	   
	if((boost::iequals(cmd,"block")){
		std::shared_ptr<Player> actor;
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		
		std::shared_ptr<Player> target;
		std::cout<<"Choisissez une victime ! "<<endl;
		std::cin>>cmd2;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>();
		target = funnel->findPlayer(cmd2);
		funnel->tackle(cmd2);		
		delete funnel;
	}
	   
	   if((boost::iequals(cmd,"pass")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::shared_ptr<Player> actor;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		
		std::shared_ptr<Player> target;
		std::cout<<"Choisissez un cible ! "<<endl;
		std::cin>>cmd2;
		target = funnel->findPlayer(cmd2);
		funnel->pass(cmd2);		
		delete funnel;
	}
	      
	if((boost::iequals(cmd,"foul")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::shared_ptr<Player> actor;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		
		std::cout<<"Choisissez un cible ! "<<endl;
		std::cin>>cmd2;
		funnel->findPlayer(cmd2);
		funnel->foul(cmd2);		
		delete funnel;
	}
	   
	if((boost::iequals(cmd,"stand up")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::shared_ptr<Player> actor;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		
		funnel->standUp();		
		delete funnel;
	}
	   
   	if((boost::iequals(cmd,"done playing")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::shared_ptr<Player> actor;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		

		funnel->donePlaying();		
		delete funnel;
	}
	   
	if((boost::iequals(cmd,"go for it")){
		std::cout<<"Choisissez un joueur ! "<<endl;
		std::shared_ptr<Player> actor;
		std::cin>>cmd;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		actor = funnel->findPlayer(cmd);
		delete funnel;
		std::shared_ptr<Funnel> funnel = std::make_shared<Funnel>(actor, game_.getTeam1(), game_.getTeam2(), game_);
		
		std::cout<<"Choisissez une direction ! "<<endl;
		std::cin>>cmd;
		funnel->goForIt(cmd);		
		delete funnel;
	}

}
