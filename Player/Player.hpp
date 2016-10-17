#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

/*!
 * @file Player.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>
#include "../Tile/Tile.hpp"

class Tile;

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
	
		bool outnumbered();
		void turnover();
		int freeSpot();
		void pushBack();
		int oppoAjac();
		int countAdvantage(Player oppoPlayer);
	
		void downed();
		void bothDown(Player oppoPlayer);
		void pushed();
		void stumble();
		
	private:
		int mvt_, str_, agi_, arm_, xpe_, lvl_, status_;
		Tile case_;
};
 
 
 
 
#endif
