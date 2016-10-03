#ifndef __BALL_HPP__
#define __BALL_HPP__
/**
 * @file Ball.hpp
 * @author Elbert NYUNTING 
 * @brief Class Ball for Blood Bowl, fickle litthe thing...
**/

#include <queue>
#include <vector>

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
    Case getLocation();
    void setHolder(Player holder);
    void setLocation(Case location);
    
    private:
    Player holder_;
    Case location_;
};

#endif
