/**
 * @file Out.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp pour montrer qu'un joueur est à terre sorti du jeu. Etat puits, donc une fois sorti, le joueur ne revient plus!
*/

#include "Out.hpp"

using namespace std;

/**
 * @brief Constructeur de Out
 * @param joueur, le joueur concerné
 */
Out::Out(){}


/**
 * @brief Destructeur de Out
 */
Out::~Out(){}

std::shared_ptr<Wellbeing> Out::getUp(){}
std::shared_ptr<Wellbeing> Out::knockedOut(){}
std::shared_ptr<Wellbeing> Out::knockedDown(){}
std::shared_ptr<Wellbeing> Out::getOut(){}
std::shared_ptr<Wellbeing> Out::goProne(){}
std::shared_ptr<Wellbeing> Out::returnToGame(){}
std::shared_ptr<Wellbeing> Out::backToNormal(){}

