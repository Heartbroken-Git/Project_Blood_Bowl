#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

/*!
 * @file Player.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Player{
	public:
		Player();
		~Player();
		enum skill{};
		void setMvt(int mouvementAllowance);
		void setStr(int strength);
		void setAgi(int agility);
		void setArm(int armorValue);
		void setStatus(int status);
		void setName(string name);
		int getMvt();
		int getStr();
		int getAgi();
		int getArm();
		int getStatus();
		std::string getName();
	
		bool outnumbered();
		void turnover();
		int freeSpot();
		void pushBack();
		int countAdvantage(Player oppoPlayer);
		int oppoAdjac();
		void downed();
		bool block();
		bool dodges();
		bool pass();
		bool catches();
		bool nextTo(Player oppoPlayer);
		int tileDist(Player player);
		void passSuccess();

		
		
	private:
		int mvt_, str_, agi_, arm_, status_;
		string name_;

};
 
 
 
 
#endif
