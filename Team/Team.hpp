#ifndef __Team_HPP__
#define __Team_HPP__

/**
 * @file Team.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 24/11/2016
 * @brief Fichier entête des Team
 */
 
#include <iostream>
#include <vector>
#include <string>

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
	vector<Player> roster_;

public:
	Team();
	~Team();
	int getNbScore();
	int getNom();
	Race getRace();
	Player getPlayer(int);
	void setNbScore(int);
	void setNom(string);
	void setRace(Race);
	void setPlayer(int, Player);
	void addPlayer(Player);
	void removePlayer(int);
};
 
 
 
 
#endif
