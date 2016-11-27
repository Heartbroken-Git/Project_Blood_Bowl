/*!
 * @file Catcher.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <boost/algorithm/string.hpp>
#include "Catcher.hpp"
using namespace std;

/*!
*@brief Constructeur des Catchers
*@param type: int de type de Catcher (humain, elfe)
*@pre 1 <= type <= 3
*@complexite Constante
*/
Catcher::Catcher(string name, string race){
		if (boost::iequals(race,"human") || boost::iequals(race,"homme") || boost::iequals(race,"humain")){
			ma = 8;
			st = 2;
			ag = 3;
			av = 7;
		}else if ((boost::iequals(race,"orc") || boost::iequals(race,"orque") || boost::iequals(race,"ork")){
			ma = 8;
			st = 3;
			ag = 4;
			av = 7;
		}
		}else if ((boost::iequals(race,"elf") || boost::iequals(race,"elfe") || boost::iequals(race,"eldar")){
			ma = 8;
			st = 3;
			ag = 4;
			av = 7;
		}
}

