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
	race_ = new Race();
	x_ = 0;
	y_ = 0;
	
	/*
	* @brief Playability setter
	*/
	etatFresh_ = new Fresh(this);
	etatDonePlaying_ = new NotPlayable(this);
	etatPassed_ = new Passed(this); 
	etatMoved_ = new Moved(this);
	etatTackle_ = new Tackled(this);
	etatGFI_ = new GFI(this);
	etatBlitz_ = new Blitzed(this);
	etatBlitzMoved_ = new BlitzMoved(this);
	etatBlitzTackle_ = new BlitzTackled(this);
	playability_ = etatFresh_;
	
	/*
	* @brief Wellbeing setter
	*/
	etatWellbeing_ = etatHealthy_;
	etatProne_ = new Prone(this);
	etatUp_ = new HalfHealthy(this);
	etatKnockedDown_ = new ATerre(this);
	etatKnockedOut_ = new KO(this);
	etatOut_ = new Out(this);
	etatHealthy_ = new Healthy(this);
	
	
}

Player::~Player(){
	std::cout<<"Player deleted"<<std::endl;

}

//COMMENTER SUR CHAQUE GETTERS
int Player::getMvt(){return mvt_;}
int Player::getStr(){return str_;}
int Player::getAgi(){return agi_;}
int Player::getArm(){return arm_;}
bool Player::block(){return blocker_;}
bool Player::pass(){return thrower_;}
bool Player::dodges(){return dodger_;}
bool Player::catches(){return catcher_;}
Playability Player::getPlayability();{return playability_;}
Playability Player::getWellbeing();{return wellbeing_;}
string Player::getName(){return name_;}
Race getRace(){return race_;}
bool Player::isHoldingBall(){return hasBall_;}
int Player::getX(){return x_;}
int Player::getY(){return y_;}
	
//COMMENTER SUR CHAQUE SETTERS
/*
* Setters inutiles
*/
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
void Player::etatPassed(){playability_ = etatPassed_;}
void Player::etatMoved(){playability_ = etatMoved_;}
void Player::etatTackle(){playability_ = etatTackle_;}
void Player::etatGFI(){playability_ = etatGFI_;}
void Player::etatBlitz(){playability_ = etatBlitz_;}
void Player::etatBlitzMoved(){playability_ = etatBlitzMoved_;}
void Player::etatBlitzTackle(){playability_ = etatBlitzTackle_;}
void Player::etatDonePlaying(){playability_ = etatDonePlaying_;}
void Player::etatFresh(){playability_ = etatFresh_;}

void Player::etatProne(){wellbeing_ = etatProne_;}
void Player::etatHalfHealthy(){wellbeing_ = etatUp_;}
void Player::etatATerre(){wellbeing_ = etatKnockedDown_;}
void Player::etatKO(){wellbeing_ = etatKnockedOut_;}
void Player::etatOut(){wellbeing_ = etatOut_;}
void Player::etatHealthy(){wellbeing_ = etatHealthy_;}








