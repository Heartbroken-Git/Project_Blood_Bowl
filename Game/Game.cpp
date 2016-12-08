/**
 * @file Game.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @author Elbert NYUNTING
 * @date 08/12/2016
 * @brief Fichier source de la classe décrivant la partie en cours
 */

#include "Game.hpp"

using namespace std;

/**
 * @brief Constructeur de Game
 * @param ball la Ball qui sera utilisée durant la partie
 * @param t1 la Team choisie par le joueur 1
 * @param t2 la Team choisie par le joueur 2
 */
Game::Game(Ball ball, Team t1, Team t2){
    ball_ = ball;
    team1_ = t1;
    team2_ = t2;
}

/**
 * @brief Destructeur de Game
 */
Game::~Game(){
    std::cout<<"Game ended."<<std::endl;
}

/**
 * @brief Accesseur à la Ball de la partie
 * @return la Ball utilisée par la Game en cours
 */
Ball Game::getBall(){
  return ball_;
}

int tileDist(Player player1, Player player2) {
	
