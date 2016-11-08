/*!
 * @file Game.cpp
 * @author Elbert NYUNTING
 * @brief Protoype Game
 */

#include "Game.hpp"
using namespace std;

Game::Game(Ball ball){
    ball_ = ball;
}

Game::Game(){}

Game::~Game(){
    std::cout<<"Game ended."<<std::endl;
}

Ball Game::getBall(){
  return ball_;
}

