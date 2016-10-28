#ifndef __GRID_HPP__
#define __GRID_HPP__

/**
 * @file Grid.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 28/10/2016
 * @brief Entête du fichier source définissant le plateau en lui même
 */

#include <string>
#include "Tile.hpp"
using namespace std;

/**
 * @class Grid
 * @brief Classe définissant le plateau de jeu
 * @details Le plateau de jeu est ici définicomme un tableau de Tile, Tile sur lesquelles peuvent se trouver un joueur, le ballon ou rien du tout. Cette classe servira aussi à l'affichage initial
 */
class Tile {
	private:
		Tile[15][28] plateau_;

	public:
		Grid();
		~Grid();
		bool addTile(int, int); //Peut être un void à la place si on se fiche de savoir si l'ajout à réussi
		bool removeTile(int, int); //cf plus haut
		bool setTile(int, int); //cf plus haut
		Tile getTile(int, int);
		void displayPlateau();
}
#endif
