#ifndef __TILE_HPP__
#define __TILE_HPP__

/**
 * @file Tile.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/10/2016
 * @brief Entête du fichier source définissant les cases du plateau
 */

#include <string>
#include <memory>
#include <iostream>
#include "../Player/Player.hpp"

using namespace std;
using std::unique_ptr;


/**
 * @class Tile
 * @brief Classe définissant une case du plateau de jeu
 * @details Une case du plateau de jeu est ici définie à l'aide de ses coordonnées sur le plateau (les entiers x et y) ainsi que par le fait d'avoir (ou pas) un joueur ou la balle sur la case
 */
class Tile {
	private:
		int x_;
		int y_;
		std::shared_ptr<Player> playerOn_;
		bool ballOn_;
	public:
		Tile(int, int);
		Tile();
		Tile(int, int, Player);
		Tile(int, int, bool);
		int getX();
		int getY();
		Player getPlayerOn();
		bool isBallOn();
		void setPlayerOn(Player);
		void setBallOn(bool);
		string toString();
};

#endif
