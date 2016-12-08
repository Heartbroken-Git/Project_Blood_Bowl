#ifndef __GAME_HPP__
#define __GAME_HPP__

/**
 * @file Game.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @author Elbert NYUNTING
 * @date 08/12/2016
 * @brief Fichier entête de la classe décrivant la partie en cours
 */
 
#include <iostream>
#include "../Ball/Ball.hpp"
#include "../Player/Player.hpp"
#include "../Grid/Grid.hpp"
#include "../Team/Team.hpp"

class Ball;
class Player;
class Grid;
class Team;
 
using namespace std;

/**
 * @class Game
 * @brief Classe décrivant une partie en cours et gérant le fonctionnement de celle-ci
 */
class Game{
public:
	Game(Ball, Team, Team);
	~Game();
	Ball getBall();
	int tileDist(Player player1, Player player2);
	bool nextToPlayer(Player player1, Player player2);
	int oppoAdjac(Player player);
	int getPlayerTeam(Player);
	void turnover(Player player);
	int outnumbered(Player player);
	int freeSpot(Player player);
	void pushBack(Player oppoPlayer);

private:
	Ball ball_; 
	Grid grid_;
	Team team1_;
	Team team2_;
	std::vector<Player> players_;
 
};

#endif
