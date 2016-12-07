/*!
 * @file Funnel.cpp
 * @author Elbert NYUNTING
 * @brief Classe Funnel pour les commandes
 */

#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Funnel.hpp"
using namespace std;
	
/*!
* @brief Constructeur de Funnel
* @param les classes qui seront traitées, ca fait beaucoup
* 
*/
Funnel::Funnel(ActionBlock actionBlock, ActionDodge actionDodge, ActionFoul actionFoul, ActionGoFotIt actionGoForIt, ActionPass actionPass, ActionStandUp actionStandUp, Player player, Game game, Team team1, Team team2){
	
	actionBlock_ = actionBlock;
	actionDodge_ = actionDodge;
	actionFoul_ = actionFoul;
	actionGoForIt_ = actionGoForIt;
	actionPass_ = actionPass;
	actionStandUp_ = actionStandUp;
	
	player_ = player;
	game_ = game;
	team1_ = team1;
	team2_ = team2;
}

Funnel::~Funnel(){};

void Funnel::move(String direction){
	
	if(player_.getMvt()>0){
		if(boost::iequals(direction,"w")||(boost::iequals(race,"west")||(boost::iequals(race,"o")||(boost::iequals(race,"ouest")||(boost::iequals(race,"gauche")||(boost::iequals(race,"left")){
			game_.players_
		}
	}else{
	
	}
}









