/**
 * @file Team.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source des Team
 */

#include <iostream>
#include <vector>
#include <string>
#include "Team.hpp"

using namespace std;

/**
 * @brief Constructeur des Teams
 * @param n le nom de l'équipe construite
 * @param r la Race de l'équipe construite
 */
Team::Team(string n, Race r){
	nbScore_ = 0;
	nom_ = n;
	teamRace_ = r;
}

/**
 * @brief Destructeur des Teams
 */
Team::~Team(){}

/**
 * @brief Accesseur au score de l'équipe
 * @return un entier étant le score de l'équipe
 */
int Team::getNbScore(){
	return(nbScore_);
}

/**
 * @brief Accesseur du nom de l'équipe
 * @return un string étant le nom de l'équipe
 */
int Team::getNom(){
	return(nom_);
}


/**
 * @brief Accesseur de la race de l'équipe
 * @return un string étant le nom de l'équipe
 */
Race Team::getRace(){
	return(teamRace_);
}

/**
 * @brief Accesseur de la race de l'équipe
 * @param no un entier représentant le numéro du joueur recherché dans l'équipe
 * @return le Player à la case no du roster de l'équipe
 */
Player Team::getPlayer(int no){
	return(roster_[no]);
}

/**
 * @brief Mutateur du score de l'équipe
 * @param i un entier représentant le nouveau score de l'équipe
 */
void Team::setNbScore(int i){
	nbScore_ = i;
}

/**
 * @brief Mutateur du nom de l'équipe
 * @param s un string représentant le nom de l'équipe
 */
void Team::setNom(string s) {
	nom_ = s;
}

/**
 * @brief Mutateur de la Race de l'équipe
 * @param r la nouvelle Race de l'équipe
 */
void Team::setRace(Race r) {
	teamRace_ = r;
}

/**
 * @brief Mutateur des Player d'une Team
 * @param i le numéro du joueur à changer
 * @param p le nouveau joueur à placer
 */
void Team::setPlayer(int i, Player p) {
	roster_[i] = p;
}
