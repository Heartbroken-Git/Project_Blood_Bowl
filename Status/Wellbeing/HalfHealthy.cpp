/**
 * @file HalfHealthy.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est à terre sorti du jeu. Etat puits, donc une fois sorti, le joueur ne revient plus!
*/

#include "HalfHealthy.hpp"

using namespace std;

/**
 * @brief Constructeur de HalfHealthy
 */
HalfHealthy::HalfHealthy(){}


/**
 * @brief Destructeur de HalfHealthy
 */
HalfHealthy::~HalfHealthy(){}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur son dos
 * @details HalfHealthy est maintenant Prone
 */
std::shared_ptr<Wellbeing> HalfHealthy::goProne(){
		return new Prone;
}

/**
 * @brief méthode qui change l'etat d'un joueur qui est mis sur le ventre
 * @details HalfHealthy est maintenant ATerre
 */
std::shared_ptr<Wellbeing> HalfHealthy::knockedDown(){
	return new ATerre;
}
 
 /**
 * @brief méthode qui change l'etat d'un joueur qui est assomé
 * @details HalfHealthy est maintenant KO
 */
 std::shared_ptr<Wellbeing> HalfHealthy::knockedOut(){
	 return new KO;
 }
 
  /**
 * @brief méthode qui change l'etat d'un joueur qui viré du jeu
 * @details HalfHealthy est maintenant hors du jeu
 */
 std::shared_ptr<Wellbeing> HalfHealthy::getOut(){
	return new Out;
 }
 
   /**
 * @brief méthode qui change l'etat d'un joueur qui a regagné son soufle et bien actif
 * @details HalfHealthy est maintenant Healthy
 */
std::shared_ptr<Wellbeing> HalfHealthy::backToNormal(){
	return new Healthy;
}

std::shared_ptr<Wellbeing> HalfHealthy::returnToGame(){}
std::shared_ptr<Wellbeing> HalfHealthy::getUp(){}


