/*!
 * @file Main.cpp
 * @author Elbert NYUNTING
 * @brief Protoype
 */

#include <iostream>
#include <vector>

#include "../Ball/Ball.hpp"
#include "../Game/Game.hpp"
#include "../Team/Team.hpp"
#include "../Team/TeamCompoViolent.hpp"
#include "../Team/TeamCompoAgile.hpp"
#include "../Commands/Commands.hpp"

using namespace std;

int main(){
	Ball ball;
	TeamCompoViolent compoOrc;
	TeamCompoAgile compoElf;
	
	Team team1 = compoOrc.createTeam();
	Team team2 = compoElf.createTeam();
	
	
	Game game(ball, team1, team2);
	
	Commands cmd(game);
	
	while(true) {
		cmd.input();
	}
	
	return(0);
}
