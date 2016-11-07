/*!
 * @file Ball.cpp
 * @author Elbert NYUNTING
 * @brief Protoype Ball
 */

#include "Ball.hpp"
using namespace std;

Ball::Ball(){}
Ball::~Ball(){}

Player Ball::getHolder(){
  return holder_;
}
Tile Ball::getLocation(){
  return location_;
}
void Ball::setHolder(Player holder){
  holder_ = holder;
}
void Ball::setLocation(Tile location){
  location_=location
}
void bounce(){}
