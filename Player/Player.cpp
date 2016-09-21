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
	
	
	
	
	


int main()
{

	int choice;
	do
	{
	cout <<"WELCOME TO THE BLOODBOWL TEAM AND PLAYER EDITOR"<<endl
		<<endl<<"WHAT DO YOU WISH TO DO?"<<endl
		<<"1.Create new team"<<endl
		<<"2.Edit existing team"<<endl
		<<"3.Exit"<<endl;
	cin >> choice;
	}while(choice != 3);
	team newTeam = team();
	switch(choice)
	{
	case 1:

		int raceChoice;
		int playerChoice;
		cout <<"CHOOSE A RACE"<<endl
			<<"1.Humans"<<endl
			<<"2.Elves"<<endl
			<<"3.Orcs"<<endl;
		cin >> raceChoice;
		cout <<"CHOOSE A PLAYER TO ADD TO YOUR TEAM"<<endl
			<<"1.Lineman"<<endl<<"2.Thrower"<<endl<<"3.Blitzer"<<endl;
		if (raceChoice == 1)
		{
			cout <<"4.Catcher"<<endl<<"5.Ogre"<<endl;
		}	
		if (raceChoice == 2)
		{
			cout <<"4.Catcher"<<endl;
		}
		if (raceChoice == 3)
		{
			cout <<"4.Catcher"<<endl<<"5.Goblin"<<endl
				<< "6.Black Orc"<<endl<<"7.Troll";
		}
		cin >>playerChoice;
		
		switch(playerChoice)
		{
		case 1:
			newTeam.addPlayer(Lineman(raceChoice));
			break;
		case 2:
			newTeam.addPlayer(Thrower(raceChoice));
			break;
		case 3:
			newTeam.addPlayer(Blitzer(raceChoice));
			break;
		case 4:
			newTeam.addPlayer(Catcher(raceChoice));
			break;
		case 5:
			if (raceChoice == 1)
			{
				newTeam.addPlayer(Ogre());
			}
			if (raceChoice == 3)
			{
				newTeam.addPlayer(Goblin());
			}
			break;
		case 6:
			newTeam.addPlayer(BlackOrc());
			break;
		case 7:
			newTeam.addPlayer(Troll());
			break;
		}
		break;
	case 2:
		int player;
		int edit;
		cout <<"SELECT PLAYER TO EDIT:"<<endl;
		cin >>player;
		cout <<"WHAT DO YOU WISH TO DO?"<<endl
			<<"1.Edit Mouvement Allowance"<<endl
			<<"2.Edit strength"<<endl
			<<"3.Edit Agility"<<endl
			<<"4.Edit Armor Value"<<endl
			<<"5.Edit Experience Level"<<endl
			<<"6.Edit Skills";
		cin >>edit;
		switch(edit)
		{
		case 1:
			int new_ma;
			cout <<"ENTER NEW MOUVEMENT ALLOWANCE";
			cin >>new_ma;
			newTeam.roster[player].setMA(new_ma);
			break;
		case 2:
			int new_st;
			cout <<"ENTER NEW STRENGTH";
			cin >>new_st;			
			newTeam.roster[player].setST(new_st);
			break;
		case 3:
			int new_ag;
			cout <<"ENTER NEW AGILTY";
			cin >>new_ag;
			newTeam.roster[player].setAG(new_ag);
			break;
		case 4:
			int new_av;
			cout <<"ENTER NEW ARMOR VALUE";
			cin >>new_av;
			newTeam.roster[player].setAV(new_av);
			break;
		case 5:
			int new_xp;
			cout <<"ENTER NEW EXPERIENCE";
			cin >>new_xp;
			newTeam.roster[player].setXP(new_xp);
			break;
		case 6:
			cout <<"ENTER NEW SKILL";
			break;
		}
		break;
	case 3:
		break;
	}
}
