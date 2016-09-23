/*!
 * @file Player.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <vector>
#include "Player.hpp"
using namespace std;
	
/*!
*@brief Constructeur des PLayers
*@complexite Constante
*/
Player::Player(){
	ma = 0;
	st = 0;
	ag = 0;
	av = 0;
	xp = 0;
	lvl = 1;
}

//COMMENTER SUR CHAQUE GETTERS
int Player::getMA(){
	return ma;
}

int Player::getST(){
	return st;
}

int Player::getAG(){
	return ag;
}
	
int Player::getAV(){
	return av;
}
	
int Player::getXP(){ 
	return xp;
}
	
int Player::getLevel(){
	return lvl;
}
	
//COMMENTER SUR CHAQUE SETTERS
void Player::setMA(int mouvementAllowance){
	ma = mouvementAllowance;
}
	
void Player::setST(int strength){
	st = strength;
}
	
void Player::setAG(int agility){
	ag = agility;
}
	
void Player::setAV(int armorValue){
	av = armorValue;
}
	
void Player::setXP(int experience){
	xp = experience;
}
	
void Player::setLevel(int level){
	lvl = level;
}
	
	
	
	
	



