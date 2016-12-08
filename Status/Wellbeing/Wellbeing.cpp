/**
 * @file Wellbeing.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est à terre sorti du jeu. Etat puits, donc une fois sorti, le joueur ne revient plus!
*/

#include "Wellbeing.hpp"

using namespace std;

/**
 * @brief Constructeur de Wellbeing
 */
Wellbeing::Wellbeing(){}

/**
 * @brief Destructeur de Wellbeing
 */
Wellbeing::~Wellbeing(){}

std::shared_ptr<Wellbeing> Wellbeing::getUp(){}
std::shared_ptr<Wellbeing> Wellbeing::knockedOut(){}
std::shared_ptr<Wellbeing> Wellbeing::knockedDown(){}
std::shared_ptr<Wellbeing> Wellbeing::getOut(){}
std::shared_ptr<Wellbeing> Wellbeing::goProne(){}
std::shared_ptr<Wellbeing> Wellbeing::returnToGame(){}
std::shared_ptr<Wellbeing> Wellbeing::backToNormal(){}

