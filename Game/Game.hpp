#ifndef __GAME_HPP__
#define __GAME_HPP__

/*!
 * @file Game.hpp
 * @author Elbert NYUNTING
 * @brief Protoype Game
 */
 
 #include <iostream>
 #include "Ball/Ball.hpp"
 
 using namespace std;
 
 class Game{
       public:
              Game();
              ~Game();
              Ball getBall();
              
       private:
             Ball ball_; 
 
 };

#endif
