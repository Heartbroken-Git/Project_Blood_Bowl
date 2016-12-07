#ifndef __Team_HPP__
#define __Team_HPP__

/**
 * @file Team.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête des Team
 */
 
#include <iostream>
#include <vector>
#include <string>
#include "../Player/Player.hpp"
#include "../Race/Race.hpp"

const int GLOBAL_CONST_TEAMROSTERSIZE = 11;

/**
 * @class Team
 * @brief Classe abstraite définissant les équipes du jeu
 * @details Les équipes d'un coach contiendront des listes de joueurs inclus dans l'équipe, le nom de l'équipe, ainsi que la Race de l'équipe.
 */
class Team{
private:
	int nbScore_;
	string nom_;
	Race teamRace_;
	Player roster_[GLOBAL_CONST_TEAMROSTERSIZE];

public:
	Team(string, Race);
	~Team();
	int getNbScore();
	string getNom();
	Race getRace();
	Player getPlayer(int);
	void setNbScore(int);
	void setNom(string);
	void setRace(Race);
	void setPlayer(int, Player);
};
 
 
 
 
#endif
