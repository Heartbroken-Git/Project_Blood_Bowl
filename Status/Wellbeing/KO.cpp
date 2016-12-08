/**
 * @file KO.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est assomé, et peut (peut etre) revenir en jeu
*/

#include "KO.hpp"

using namespace std;

/**
 * @brief Constructeur de KO
 * @param joueur, le joueur concerné
 */
KO::KO(){}


/**
 * @brief Destructeur de KO
 */
KO::~KO(){}

/**
 * @brief méthode qui change l'etat d'un joueur qui retourne en jeu
 * @details Ko est maintenant Healthy
 */
std::shared_ptr<Wellbeing> KO::returnToGame(){
	return new Healthy;	
}

std::shared_ptr<Wellbeing> KO::getUp(){}
std::shared_ptr<Wellbeing> KO::knockedOut(){}
std::shared_ptr<Wellbeing> KO::knockedDown(){}
std::shared_ptr<Wellbeing> KO::getOut(){}
std::shared_ptr<Wellbeing> KO::goProne(){}
std::shared_ptr<Wellbeing> KO::backToNormal(){}

