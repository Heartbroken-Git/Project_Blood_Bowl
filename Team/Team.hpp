#ifndef __Team_HPP__
#define __Team_HPP__

/*!
 * @file Team.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>

class Team{
public:
	int i;
	vector<Player> roster;
	vector<Player>::iterator iter;
	Team();
	int wins;
	int losses;
	int draws;
	void setWins(int);
	void setLosses(int);
	void setDraws(int);
	int getWins();
	int getLosses();
	int getDraws();
	void addPlayer(Player);
	void removePlayer(int);
	int teamSize();
};
 
 
 
 
#endif
