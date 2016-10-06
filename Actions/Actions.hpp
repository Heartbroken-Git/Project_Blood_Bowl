#ifndef __ACTIONS_HPP__
#define __ACTIONS_HPP__
/**
 * @file Ball.hpp
 * @author Elbert NYUNTING 
 * @brief Abstract class Actions for Blood Bowl, expect many failures.
**/

#include <queue>
#include <vector>

/**
 * @brief 
 * 
 * À COMPLÉTER
**/
class Actions{
    public:
    Actions();
    ~Actions();
	virtual void doAction()=0;
};

#endif
