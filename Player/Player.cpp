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
	name_="";
	race_="";
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
	
int Player::getArm(){
	return arm_;
}

int Player::getStatus(){
	return status_;	
}

string Player::getName(){
	return name_;	
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

void Player::setStatus(int status){
	status_ = status;	
}
void Player::setBall(bool test){
	hasBall_ = test;	
}
bool Player::isHoldingBall(){
	return hasBall_;	
}
void Player::setName(string name){
	name_=name;	
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

int Player::countAdvantage(Player oppoPlayer){
	return 5;	
}

int Player::oppoAdjac(){
	return 5;	
}

bool Player::nextTo(Player oppoPlayer){
	return true;	
}

bool Player::block(){
	return blocker_;	
}

bool Player::pass(){
	return thrower_;	
}

bool Player::dodges(){
	return dodger_;	
}

bool Player::catches(){
	return catcher_;	
}

int Player::tileDist(Player player){
	return 5;	
}

void Player::passSuccess(){}	

//SEMI-PLACEHOLDER
void Player::displayPlayer() {
	cout << "?";
}
