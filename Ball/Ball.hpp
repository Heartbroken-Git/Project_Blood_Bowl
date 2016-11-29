#ifndef __BALL_HPP__
#define __BALL_HPP__
/**
 * @file Ball.hpp
 * @author Elbert NYUNTING 
 * @brief Class Ball for Blood Bowl, fickle litthe thing...
**/

#include <queue>
#include <vector>
#include "../Tile/Tile.hpp"
#include "../Player/Player.hpp"

/**
 * @brief 
 * 
 * À COMPLÉTER
**/
class Ball{
    public:
    Ball();
    ~Ball();
    Player getHolder();
    int getX();
    int getY();
    void setHolder(Player holder);
    void bounce();
    
    private:
    Player holder_;
    int x_;
    int y_;
    Grid grid_;
};

#endif
