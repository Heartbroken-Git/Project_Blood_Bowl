/*!
 * @file Team.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <vector>
#include "Team.hpp"
using namespace std;

/*!
*@brief Constructeur des Teams
*@complexite Constante
*/
Team::Team(){
	i = 0; //nb PLayer
	wins = 0;
	losses = 0;
	draws = 0;
}


//COMMENT SUR CHAQUE GETTER
int Team::getWins(){
	return wins;
}


int Team::getLosses(){
	return losses;
}


int Team::getDraws(){
	return draws;
}


//COMMENT SUR CHAQUE SETTER
void Team::setWins(int w){
	wins = w;
}


void Team::setLosses(int l){
	losses = l;
}


void Team::setDraws(int d){
	draws = d;
}


/*!
*@brief Incrémenteur de joueurs
*@param Player p
*@complexite Constante
*/
void Team::addPlayer(Player p){
	roster.push_back(p);
	i++;
}
