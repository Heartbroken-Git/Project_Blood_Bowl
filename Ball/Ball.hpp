#ifndef __BALL_HPP__
#define __BALL_HPP__
/**
 * @file Ball.hpp
 * @author Elbert NYUNTING 
 * @brief Class Ball for Blood Bowl, fickle litle thing...
**/

#include <memory>
#include <iostream>
#include "../Tile/Tile.hpp"
#include "../Player/Player.hpp"

/**
 * @brief 
 * 
 * À COMPLÉTER
**/
class Ball{
    public:
    Ball(int x, int y, Grid grid);
    ~Ball();
    Player getHolder();
    int getX();
    int getY();
    void setHolder(Player holder);
    bool isHeldByPlayer();
    void bounce();
   
    
    private:
    std::shared_ptr<Player> holder_;
    int x_;
    int y_;
    Grid grid_;
};

#endif
