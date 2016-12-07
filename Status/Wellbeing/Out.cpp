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
Out::Out(Player player){
	player_ = player;
}


/**
 * @brief Destructeur de Out
 */
Out::~Out(){}

Player Out::getPlayer(){
	return player_;
}

void Out::getUp(){}
void Out::knockedOut(){}
void Out::knockedDown(){}
void Out::getOut(){}
void Out::goProne(){}
void Out::returnToGame(){}
void Out::backToNormal(){}

