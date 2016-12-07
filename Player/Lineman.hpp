#ifndef __LINEMAN_HPP__
#define __LINEMAN_HPP__

/*!
 * @file Lineman.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>
#include "Player.hpp"

class Lineman : public Player{
	public: 
		Lineman(string name, string race);
		~Player();
		void displayPlayer();
};
	
#endif

