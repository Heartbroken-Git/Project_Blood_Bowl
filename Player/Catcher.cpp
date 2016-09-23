/*!
 * @file Catcher.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <vector>
#include "Catcher.hpp"
using namespace std;

/*!
*@brief Constructeur des Catchers
*@param type: int de type de Catcher (humain, elfe)
*@pre 1 <= type <= 3
*@complexite Constante
*/
Catcher::Catcher(int type){
		if (type = 1){
			ma = 8;
			st = 2;
			ag = 3;
			av = 7;
			xp = 0;
			lvl = 1;
		}else if (type = 2){
			ma = 8;
			st = 3;
			ag = 4;
			av = 7;
			xp = 0;
			lvl = 1;
		}
}
