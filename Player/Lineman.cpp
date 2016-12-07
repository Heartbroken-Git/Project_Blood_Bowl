/*!
 * @file Lineman.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <boost/algorithm/string.hpp>
#include "Lineman.hpp"
using namespace std;

/*!
*@brief Constructeur des Linemen
*@param type: int de type de Lineman (humain, elfe ou orc)
*@pre 1 <= type <= 3
*@complexite Constante
*/
Lineman::Lineman(string name, string race){
		if (boost::iequals(race,"human") || boost::iequals(race,"homme") || boost::iequals(race,"humain")){
			mvt_ = 6;
			str_ = 3;
			agi_ = 3;
			arm_ = 8;
			catcher_ = false;
			thrower_ = false;
			blocker_ = false;
			dodger_ = false;			
			name_ = name;
			race_ = new Human();
		}else if (boost::iequals(race,"orc") || boost::iequals(race,"orque") || boost::iequals(race,"ork")){
			mvt_ = 5;
			str_ = 4;
			agi_ = 2;
			arm_ = 8;*
			catcher_ = false;
			thrower_ = false;
			blocker_ = true;
			dodger_ = false;
			name_ = name;
			race_ = new Orc();

		}else if (boost::iequals(race,"elf") || boost::iequals(race,"elfe") || boost::iequals(race,"best")){
			mvt_ = 7;
			str_ = 3;
			agi_ = 4;
			arm_ = 7;
			catcher_ = false;
			thrower_ = false;
			blocker_ = false;
			dodger_ = true;
			name_ = name;
			race_ = new Elf();
		}
}

void Lineman::displayPlayer() {
	if(hasBall_){cout << "□";}
	else{cout << "■";}
}
