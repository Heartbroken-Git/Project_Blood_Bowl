#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

/*!
 * @file Player.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>

using namespace std;


class Player{
	public:
		Player();
		~Player();
		enum skill{};
		void setMvt(int );
		void setStr(int );
		void setAgi(int );
		void setArm(int );
		void setXpe(int );
		void setLvl(int );
		void setStatus(int status);
		int getMvt();
		int getStr();
		int getAgi();
		int getArm();
		int getXpe();
		int getLvl();
		string getName();
	
		bool outnumbered();
		void turnover();
		int freeSpot();
		void pushBack();
		int oppoAdjac();
		void downed();
		bool block();
		bool dodge();
		bool pass();
		bool catches();
		bool nextTo(Player oppoPlayer);
		int tileDist(Player player);
		
		
	private:
		int mvt_, str_, agi_, arm_, xpe_, lvl_, status_;

};
 
 
 
 
#endif
