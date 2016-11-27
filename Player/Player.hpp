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
		int getMvt();
		int getStr();
		int getAgi();
		int getArm();
		Playability getPlayability();
		Wellbeing getWellbeing();
		std::string getRace();
		std::string getName();
	
		bool outnumbered();
		void turnover();
		int freeSpot();
		void pushBack();
		int countAdvantage(Player oppoPlayer);
		int oppoAdjac();
		void downed();
		bool block();
		bool dodges();
		bool pass();
		bool catches();
		bool nextTo(Player oppoPlayer);
		int tileDist(Player player);
		void passSuccess();
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
		//Playability states
		Playability playability_;
		Playability etatFresh_;
		Playability etatDonePlaying_;
		Playability etatPassed_;
		Playability etatMoved_;
		Playability etatTackle_;
		Playability etatGFI_;
		Playability etatBlitz_;
		Playability etatBlitzMoved_;
		Playability etatBlitzTackle_;
		
		//Wellbeing states
		Wellbeing etatWellbeing_;
		Wellbeing etatProne_;
		Wellbeing etatUp_;
		Wellbeing etatKnockedDown_;
		Wellbeing etatKnockedOut_;
		Wellbeing etatOut_;
		Wellbeing etatHealthy_;
};
 
 
 
 
#endif
