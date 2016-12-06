#ifndef __GAME_HPP__
#define __GAME_HPP__

/*!
 * @file Game.hpp
 * @author Elbert NYUNTING
 * @brief Protoype Game
 */
 
 #include <iostream>
 #include "../Ball/Ball.hpp"
 
 using namespace std;
 
 class Game{
       public:
              Game(Ball ball);
              Game();
              ~Game();
              Ball getBall();
              int tileDist(Player player1, Player player2);
              bool nextToPlayer(Player player1, Player player2);
              int oppoAdjac(Player player1, Player player2);
              void turnover(Player player);
              int outnumbered(Player player);
              int freeSpot(Player player);
              pushBack(oppoPlayer);
              
       private:
             Ball ball_; 
             Grid grid_;
             std::vector<Team> team1_;
             std::vector<Team> team2_;
             std::vector<Player> players_;
             
 
 };

#endif
