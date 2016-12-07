/**
 * @file Race.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source des classes définissant les Race
 */
 
#include <string>
#include <iostream>
#include "Race.hpp"

using namespace std;

/**
 * @brief Constructeur de Race
 * @param n le nom de la Race
 * @param c le code couleur de la Race
 */
Race::Race(string n, string c) {
	nomRace = n;
	colorationRace = c;
}

/**
 * @brief Destructeur vide de Race
 */
Race::~Race() {}

/**
 * @brief Accesseur du nom de la Race
 * @return un string étant le nom de la Race
 */
string Race::getNomRace() {
	return(nomRace);
}

/**
 * @brief Accesseur de la coloration de la Race
 * @return un string étant le code de la coloration pour affichage terminal
 */
string Race::getColorationRace() {
	return(colorationRace);
}

