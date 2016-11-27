/*!
 * @file Thrower.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <boost/algorithm/string.hpp>
#include "Thrower.hpp"
using namespace std;

/*!
*@brief Constructeur des Throwers
*@param type: int de type de Lineman (humain, elfe ou orc)
*@pre 1 <= type <= 3
*@complexite Constante
*/
Thrower::Thrower(string name, string race){
		if (boost::iequals(race,"human") || boost::iequals(race,"homme") || boost::iequals(race,"humain")){
			ma = 6;
			st = 3;
			ag = 3;
			av = 8;
		}else if (boost::iequals(race,"ork") || boost::iequals(race,"orque") || boost::iequals(race,"orc")){
			ma = 6;
			st = 3;
			ag = 4;
			av = 7;
		}else if (boost::iequals(race,"elf") || boost::iequals(race,"elfe") || boost::iequals(race,"eldar")){
			ma = 5;
			st = 3;
			ag = 3;
			av = 8;
		}
}
