#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

/*!
 * @file Player.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>

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
		int getMvt();
		int getStr();
		int getAgi();
		int getArm();
		int getXpe();
		int getLvl();
		
	private:
		int mvt, str, agi, arm, xpe, lvl;
};
 
 
 
 
#endif
