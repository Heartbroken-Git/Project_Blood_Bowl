#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

/*!
 * @file Player.hpp
 * @author Elbert NYUNTING
 * @brief Classe mere de joueur, qui composera une équipe
 */
 
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "../Status/Playability/Playability.hpp" 
#include "../Status/Wellbeing/Wellbeing.hpp" 
#include "../Race/Race.hpp"

using namespace std;


class Player{
	public:
		Player();
		~Player();
		void setMvt(int mouvementAllowance);
		void setStr(int strength);
		void setAgi(int agility);
		void setArm(int armorValue);
		void setName(string name);
		void setBall(bool test);
		void addMovement();
		void setX(int x);
		void setY(int y);
				
		int getMvt();
		int getStr();
		int getAgi();
		int getArm();
		bool block();
		bool dodges();
		bool pass();
		bool catches();
		Race getRace();
		std::string getName();
		bool isHoldingBall();		
		std::shared_ptr<Playability> getPlayability();
		std::shared_ptr<Wellbeing> getWellbeing();
		int getX();
		int getY();

		void displayPlayer();
		
		//Playability
		void etatPassed();
		void etatMoved();
		void etatTackle();
		void etatGFI();
		void etatBlitz();
		void etatBlitzMoved();
		void etatBlitzTackle();
		void etatDonePlaying();
		void etatFresh();
		
		//Wellbeing
		void etatProne();
		void etatHalfHealthy();
		void etatATerre();
		void etatKO();
		void etatOut();
		void etatHealthy();
		
	private:
		int mvt_, str_, agi_, arm_;
		string name_, race_;
		Race race_;
		bool hasBall_;
		bool catcher_, thrower_, blocker_, dodger_;
		int x_, y_;
	
		//Wellbeing states
	protected:
		std::shared_ptr<Playability> playabilityState_;
		std::shared_ptr<Wellbeing> wellbeingState_;
};
 
 
 
 
#endif
