#ifndef __FUNNEL_HPP__
#define __FUNNEL_HPP__
/*!
 * @file Funnel.hpp
 * @author Elbert NYUNTING
 * @brief classe funnel qui prends tous les méthodes de Action, Game, Team et Player et les rendre cohérent
 */
 

#include <iostream>
#include <string>
#include "../Actions/ActionBlock.hpp"
#include "../Actions/ActionDodge.hpp"
#include "../Actions/ActionFoul.hpp"
#include "../Actions/ActionGoForIt.hpp"
#include "../Actions/ActionPass.hpp"
#include "../Actions/ActionStandUp.hpp"
#include "../Player/Player.hpp"
#include "../Game/Game.hpp"
#include "../Team/Team.hpp"

using namespace std;
class Funnel{
	private:
		/*
		* Pas besoin de les mettre en attribut, ils vont etre crée (par smart pointer, voyons) dans les méthodes.
		*/	
		/*ActionBlock actionBlock_;
		ActionDodge actionDodge_;
		ActionFoul actionFoul_;
		ActionGoFotIt actionGoForIt_;
		ActionPass actionPass_;
		ActionStandUp actionStandUp_;*/
		Player player_;
		Game game_;
		Team team1_;
		Team team2_;
	public:
		Funnel(/*ActionBlock actionBlock, ActionDodge actionDodge, ActionFoul actionFoul, ActionGoFotIt actionGoForIt, ActionPass actionPass, ActionStandUp actionStandUp,*/ Player player, Game game, Team team1, Team team2);
		~Funnel();
		
		void move(String direction);
		
		void tackle(Player joueurCible);
		void blitz();
		void pass(Player joueurCible);
		void foul(Player joueurCible);
		void goForIt(String direction);
		void standUp();
		void donePlaying();
		
		void endTurn();
		void chooseTeam(String teamType);
		void chooseRace(String raceType);
		void teamName(String name);
}

#endif
