/*!
 * @file Main.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <vector>

#include "../Dice/Dice.hpp"

using namespace std;

int main(){
	Dice d6(1,6);
	int res;
	res = d6.throwDiceSingle();
	std::cout<<res<<std::endl;
}
