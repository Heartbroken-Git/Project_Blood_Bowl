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
	mvt_ = 0;
	str_ = 0;
	agi_ = 0;
	arm_ = 0;
	xpe_ = 0;
	lvl_ = 1;
	status_ = 0;
}

Player::~Player(){
	std::cout<<"Player deleted"<<std::endl;

}

//COMMENTER SUR CHAQUE GETTERS
int Player::getMvt(){
	return mvt_;
}

int Player::getStr(){
	return str_;
}

int Player::getAgi(){
	return agi_;
}
	
int Player::getArm_(){
	return arm_;
}
	
int Player::getXpe_(){ 
	return xpe_;
}
	
int Player::getLvl(){
	return lvl_;
}
	
//COMMENTER SUR CHAQUE SETTERS
void Player::setMvt(int mouvementAllowance){
	mvt_ = mouvementAllowance;
}
	
void Player::setStr(int strength){
	str_ = strength;
}
	
void Player::setAgi(int agility){
	agi_ = agility;
}
	
void Player::setArm(int armorValue){
	arm_ = armorValue;
}
	
void Player::setXpe(int experience){
	xpe_ = experience;
}
	
void Player::setLvl(int level){
	lvl_ = level;
}

void Player::setStatus(int status){
	status_ = status;	
}

//PLACEHOLDER METHODS, JUST SO IT COMPILES, TODO. HARD.

bool Player::outnumbered(){
	return true;	
}

void Player::downed(){
	return;	
}

void Player::turnover(){
	return;	
}

int Player::freeSpot(){
	return 5;	
}

void Player::pushBack(){
	return;	
}

int Player::oppoAjac(){
	return 5;	
}

void Player::bothDown(Player oppoPlayer){
	return;	
}

void Player::pushed(){
	return;	
}

void Player::stumble(){
	return;
}	
	



