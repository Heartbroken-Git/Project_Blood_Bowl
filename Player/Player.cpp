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
	x_ = 0;
	y_ = 0;
	
	/*
	* @brief Playability setter
	*/
	playabilityState_ new Fresh;
	/*
	* @brief Wellbeing setter
	*/
	wellbeingState_ new Healthy;
	
	
}

Player::~Player(){
	std::cout<<"Player deleted"<<std::endl;

}

int Player::getMvt(){return mvt_;}
int Player::getStr(){return str_;}
int Player::getAgi(){return agi_;}
int Player::getArm(){return arm_;}
bool Player::block(){return blocker_;}
bool Player::pass(){return thrower_;}
bool Player::dodges(){return dodger_;}
bool Player::catches(){return catcher_;}
Playability Player::getPlayability();{return *playabilityState_.get();}
Wellbeing Player::getWellbeing();{rreturn *wellbeingState_.get();}
string Player::getName(){return name_;}
Race getRace(){return race_;}
bool Player::isHoldingBall(){return hasBall_;}
int Player::getX(){return x_;}
int Player::getY(){return y_;}

void Player::setMvt(int mouvementAllowance){mvt_ = mouvementAllowance;}
void Player::setStr(int strength){str_ = strength;}
void Player::setAgi(int agility){agi_ = agility;}
void Player::setArm(int armorValue){arm_ = armorValue;}
void Player::setName(string name){name_=name;}
void Player::setX(int x){x_ = x;}
void Player::setY(int y){y_ = y;}

/*
* Setters très utiles
*/
void Player::addMovement(){++mvt_;}
void Player::setBall(bool test){hasBall_ = test;}


//SEMI-PLACEHOLDER
void Player::displayPlayer() {
	cout << "?";
}

/*
* State setters
*/
void Player::etatPassed(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> passer();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatMoved(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> moving();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}		
}
void Player::etatTackle(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> tackle();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatGFI(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> GoForIt();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatBlitz(){	
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> blitz();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatBlitzMoved(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> blitzMovement();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatBlitzTackle(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> blitzTackle();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatDonePlaying(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> donePlaying();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}
void Player::etatFresh(){
	if(playabilityState_){
		std::shared_ptr<Playability> stockPlayability = playabilityState_ -> startPlaying();
		delete playabilityState_;
		playabilityState_ = stockPlayability;
	}
}

void Player::etatProne(){
	if(wellbeingState_){
		std::shared_ptr<Wellbeing> stockWellbeing = wellbeingState_ -> goProne();
		delete wellbeingState_;
		wellbeingState_ = stockWellbeing;
	}
}
void Player::etatHalfHealthy(){
	if(wellbeingState_){
		std::shared_ptr<Wellbeing> stockWellbeing = wellbeingState_ -> getUp();
		delete wellbeingState_;
		wellbeingState_ = stockWellbeing;
	}
}
void Player::etatATerre(){
	if(wellbeingState_){
		std::shared_ptr<Wellbeing> stockWellbeing = wellbeingState_ -> knockedDown();
		delete wellbeingState_;
		wellbeingState_ = stockWellbeing;
	}
}
void Player::etatKO(){
	if(wellbeingState_){
		std::shared_ptr<Wellbeing> stockWellbeing = wellbeingState_ -> knockedOut();
		delete wellbeingState_;
		wellbeingState_ = stockWellbeing;
	}
}
void Player::etatOut(){
	if(wellbeingState_){
		std::shared_ptr<Wellbeing> stockWellbeing = wellbeingState_ -> getOut();
		delete wellbeingState_;
		wellbeingState_ = stockWellbeing;
	}
}
void Player::etatHealthy(){
	if(wellbeingState_){
		std::shared_ptr<Wellbeing> stockWellbeing = wellbeingState_ -> backToNormal();
		delete wellbeingState_;
		wellbeingState_ = stockWellbeing;
	}
}








