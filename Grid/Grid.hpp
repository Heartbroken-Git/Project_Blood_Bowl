#ifndef __GRID_HPP__
#define __GRID_HPP__

/**
 * @file Grid.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 28/10/2016
 * @brief Entête du fichier source définissant le plateau en lui même
 */

#include <iostream>
#include "../Tile/Tile.hpp"

using namespace std;

//Documentation Doxygen spécifique aux constantes globales ?
const int GLOBAL_CONST_GRIDABS = 15;
const int GLOBAL_CONST_GRIDORD = 28; //c'est pas 30 plutôt que 28 ?
//Les constantes ne marchent peut être pas auquel cas faire un extern ou passage par namespace

/**
 * @class Grid
 * @brief Classe définissant le plateau de jeu
 * @details Le plateau de jeu est ici définicomme un tableau de Tile, Tile sur lesquelles peuvent se trouver un joueur, le ballon ou rien du tout. Cette classe servira aussi à l'affichage initial
 */
class Grid {
	private:
		Tile[GLOBAL_CONST_GRIDABS][GLOBAL_CONST_GRIDORD] plateau_; 

	public:
		Grid();
		~Grid();
		bool removeTile(int, int); //Peut être un void à la place si on se fiche de savoir si l'ajout à réussi
		bool setTile(Tile, int, int); //cf plus haut
		Tile getTile(int, int);
		void displayPlateau();
}
#endif
