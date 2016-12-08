/**
 * @file Healthy.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est bien en bonne état
*/

#include "Healthy.hpp"

using namespace std;

/**
 * @brief Constructeur de Healthy
 * @param joueur, le joueur concerné
 */
Healthy::Healthy(){}


/**
 * @brief Destructeur de Healthy
 */
Healthy::~Healthy(){}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur son dos
 * @details Healthy est maintenant Prone
 */
std::shared_ptr<Wellbeing> Healthy::goProne(){
		return new Prone;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur le ventre
 * @details Healthy est maintenant ATerre
 */
std::shared_ptr<Wellbeing> Healthy::knockedDown(){
	return new ATerre;
}
 
 /**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details Healthy est maintenant KO
 */
 std::shared_ptr<Wellbeing> Healthy::knockedOut(){
	 return new KO;
 }
 
  /**
 * @brief méthode qui change l'etat d'un joueur qui viré du jeu
 * @details Healthy est maintenant hors du jeu
 */
 std::shared_ptr<Wellbeing> Healthy::getOut(){
	 return new Out;
 }
 
std::shared_ptr<Wellbeing> Healthy::returnToGame(){}
std::shared_ptr<Wellbeing> Healthy::getUp(){}
std::shared_ptr<Wellbeing> Healthy::backToNormal(){}

