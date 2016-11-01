/**
 * @file Grid.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 31/10/2016
 * @brief Fichier source définissant le plateau de jeu en lui-même
 */

#include "Grid.hpp"

/**
 * @brief Constructeur de Grid
 * @details Constructeur de Grid remplissant le plateau de jeu ainsi créé de Tile vides
 */
Grid::Grid() {
	for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
		for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
			Tile tmp(i, j);
			plateau_[i,j] = tmp;
		}
	}
}

/**
 * @brief Destructeur de Grid
 */
Grid::~Grid() {}

/**
 * @brief Méthode retirant une Tile particulière du plateau
 * @param x l'abscisse de la Tile à retirer
 * @param y l'ordonnée de la Tile à retirer
 * @return un booléen indiquant si l'opération a réussi
 * @attention On ne peut retirer que des Tile dans les limites de la Grid telles que données par 0 et GLOBAL_CONST_GRIDABS ou GLOBAL_CONST_GRIDORD
 */
bool Grid::removeTile(int x, int y) {
	if ((x >= 0) && (x < GLOBAL_CONST_GRIDABS) && (y >= 0) && (y < GLOBAL_CONST_GRIDORD)) {
		plateau_[x,y] = NULL;
		return(true);
	} else {
		return(false);
	}
}

/**
 * @brief Méthode permettant de changer une Tile particulière du plateau par une autre
 * @param add la Tile a mettre
 * @param x l'abscisse de l'emplacement de la Tile
 * @param y l'ordonnée de l'emplacement de la Tile
 * @return un booléen indiquant si l'opération a réussi
 * @attention On ne peut remplacer que des Tile dans les limites de la Grid telles que données par 0 et GLOBAL_CONST_GRIDABS ou GLOBAL_CONST_GRIDORD
 * @sa Pour remplacer une Tile par un NULL employer plutôt removeTile()
 */
bool Grid::setTile(Tile add, int x, int y) {
	if ((x >= 0) && (x < GLOBAL_CONST_GRIDABS) && (y >= 0) && (y < GLOBAL_CONST_GRIDORD) && (add != NULL)) {
		plateau_[x,y] = add;
		return(true);
	} else {
		return(false);
	}
}

/**
 * @brief Méthode permettant de récupérer une Tile particulière du plateau
 * @param x l'abscisse de l'emplacement de la Tile
 * @param y l'ordonnée de l'emplacement de la Tile
 * @return la Tile se trouvant aux coordonnées (x, y)
 * @attention Retourne NULL si la Tile est vide et si x et/ou y est hors tableau
 */
Tile Grid::getTile(int x, int y) {
	if ((x >= 0) && (x < GLOBAL_CONST_GRIDABS) && (y >= 0) && (y < GLOBAL_CONST_GRIDORD)) {
		return(plateau_[x, y]);
	} else {
		return(NULL);
	}
}

/**
 * @brief Méthode affichant le contenu du tableau à l'écran
 * @sa Affiche le contenu de toute les Tile du plateau en appelant displayTile() de celles-ci
 */
void Grid::displayPlateau() {
	cout << " ▁▁▁▁▁▁▁▁▁▁▁▁▁▁▁" << endl;
	for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
		cout << "▕";
		for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
			plateau_[i,j].displayTile();
		}
		cout << "▏" << endl;
	}
}
