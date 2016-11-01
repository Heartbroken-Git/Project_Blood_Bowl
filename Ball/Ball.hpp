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
    Tile getLocation();
    void setHolder(Player holder);
    void setLocation(Tile location);
    void bounce();
    
    private:
    Player holder_;
    Tile location_;
};

#endif
