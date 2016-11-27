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
			ma = 6;
			st = 3;
			ag = 3;
			av = 8;
		}else if (boost::iequals(race,"orc") || boost::iequals(race,"orque") || boost::iequals(race,"ork")){
			ma = 6;
			st = 3;
			ag = 4;
			av = 7;
		}else if (boost::iequals(race,"elf") || boost::iequals(race,"elfe") || boost::iequals(race,"eldar")){
			ma = 5;
			st = 3;
			ag = 3;
			av = 9;
		}
}
