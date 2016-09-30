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
		players();
		enum skill{};
		void setMA(int );
		void setST(int );
		void setAG(int );
		void setAV(int );
		void setXP(int );
		void setLevel(int );
		int getMA();
		int getST();
		int getAG();
		int getAV();
		int getXP();
		int getLevel();
		
	private:
		int ma, st, ag, av, xp, lvl;
};
 
 
 
 
#endif
