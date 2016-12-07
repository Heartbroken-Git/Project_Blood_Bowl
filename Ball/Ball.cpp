/*!
 * @file Ball.cpp
 * @author Elbert NYUNTING
 * @brief Protoype Ball
 */

#include "Ball.hpp"
#include "../Dice/Dice.hpp"
#include "../Grid/Grid.hpp"
using namespace std;

Ball::Ball(int x, int y, Grid grid){
  grid_ = grid;
  x_ = x;
  y_ = y;
  if(grid_.getTile(x_, y_).isPlayerOn()){
   diceResult6 = d6.throwDiceSingle();
   if(diceResult6 + grid_.getTile(x_, y_).getPlayerOn().getAgi() < 7){
     this.bounce();
   }else{
    this.setHolder(grid_.getTile(x_, y_).getPlayerOn());
    grid_.getTile(x_, y_).getPlayerOn().setBall(true);
   }
 }
 grid_.getTile(x_,y_).setBallOn(true);  
}

Ball::~Ball(){}

Player Ball::getHolder(){
  return *holder_.get()
}
Tile Ball::getLocation(){
  return location_;
}
void Ball::setHolder(Player holder){
  holder_ = std::shared_ptr<Player> (new Player(holder));
}
int Ball::getX(){
  retun x_;
}

int Ball::getY(){
  retun y_;
}

bool Ball::isHeldByPlayer(){
  return holder_ != 0; 
}

void Ball::bounce(){
  grid_.getTile(x_,y_).setBallOn(false);
  Dice d8 = new Dice(1, 8);
  unsigned int diceResult8;
  Dice d6 = new Dice(1, 6);
  unsigned int diceResult6;  
  diceResult8 = d8.throwDiceSingle();
 
 if(diceResult8 == 1){
  --x_;
  --y_;
 }else if(diceResult8 == 2){
  --x_; 
 }else if(diceResult8 == 3){
  --x_;
  ++y_;
 }else if(diceResult8 == 4){
  ++y_; 
 }else if(diceResult8 == 5){
  ++x_;
  ++y_;
 }else if(diceResult8 == 6){
  ++x_; 
 }else if(diceResult8 == 7){
  ++x_;
  --y_;
 }else if(diceResult8 == 8){
  --y_; 
 }
  
 if(x_<0 || x_>15 || y_<0 || y_>28){
  diceResult6 = d6.throwDiceSingle(); 
  x_ = 0 + diceResult6;
  y_ = 14 + diceResult6;
 }
  
 if(grid_.getTile(x_, y_).isPlayerOn()){
   diceResult6 = d6.throwDiceSingle();
   if(diceResult6 + grid_.getTile(x_, y_).getPlayerOn().getAgi() < 7){
     this.bounce();
   }else{
    this.setHolder(grid_.getTile(x_, y_).getPlayerOn());
    grid_.getTile(x_, y_).getPlayerOn().setBall(true);
   }
   grid_.getTile(x_,y_).setBallOn(true);
}

void Ball::displayBall(){
	if(this.isHeldByPlayer() == false){cout << "◦";}
}
