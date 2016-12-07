#ifndef __CATCHER_HPP__
#define __CATCHER_HPP__

/*!
 * @file Catcher.hpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */
 
#include <iostream>
#include <vector>
#include "Player.hpp"

class Catcher : public Player{
	public: 
		Catcher(string name, string race);
		~Player();
		void displayPlayer(); 
};

#endif
