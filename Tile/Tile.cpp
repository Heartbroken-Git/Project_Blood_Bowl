/**
 * @file Tile.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 10/07/2016
 * @brief Fichier source définissant les cases du plateau de jeu
*/
#include "Tile.hpp"

/**
 * @brief Constructeur de Tile
 * @param x une coordonnee d'abscisse
 * @param y une coordonnee d'ordonnée
 * @pre x et y doivent être des coordonnées valides
 */
Tile::Tile(int x, int y) {
	x_ = x;
	y_ = y;
	playerOn_ = NULL;
	ballOn_ = false;
}

/**
 * @brief Constructeur de Tile
 * @details Variante du constructeur de Tile permettant la mise en place originale des joueurs à la construction du terrain
 * @param x une coordonnee d'abscisse
 * @param y une coordonnee d'ordonnée
 * @param player un joueur se trouvant sur la case au lancement du jeu
 * @pre x et y doivent être des coordonnées valides
 * @pre player doit être un joueur de classe Player bien défini
 */
Tile::Tile(int x, int y, Player player) {
	x_ = x;
	y_ = y;
	playerOn_ = player;
	ballOn_ = false;
}

/**
 * @brief Constructeur de Tile
 * @details Variante du constructeur de Tile permettant de mettre en place la balle à sa position initiale par exemple à l'initialisation du terrain
 * @param x une coordonnee d'abscisse
 * @param y une coordonnee d'ordonnée
 * @param originalBallTile un booléen indiquant la présence de la balle sur la case
 * @pre x et y doivent être des coordonnées valides
 */
Tile::Tile(int x, int y, bool originalBallTile) {
	x_ = x;
	y_ = y;
	playerOn_ = NULL;
	ballOn_ = originalBallTile;
}

/**
 * @brief Destructeur de Tile
 */
Tile::~Tile() {}
 
/**
 * @brief Méthode retournant l'abscisse d'une case
 * @return l'abscisse de la case
 */
int Tile::getX() {
	return(x_);
}

/**
 * @brief Méthode retournant l'ordonnée d'une case
 * @return l'abscisse de la case
 */
int Tile::getY() {
	return(y_);
}

/**
 * @brief Méthode retournant le joueur présent sur une case
 * @return le joueur se trouvant sur la carte
 * @warning retourne NULL si aucun joueur n'est présent
 */
Player Tile::getPlayerOn() {
	return(playerOn_);
}

/**
 * @brief Méthode retournant la présence ou non de la balle sur la case
 * @return un booléen indiquant la présence ou non de la balle
 */
bool Tile::isBallOn() {
	return(ballOn_);
}

/**
 * @brief Méthode mutatrice permettant d'éditer le joueur présent sur la case
 * @param player le joueur à mettre sur la case
 */
void Tile::setPlayerOn(Player player) {
	playerOn_ = player;
}

/**
 * @brief Méthode mutatrice permettant d'éditer la présence ou non de la balle sur la case
 * @param presence la presence ou absence de la balle sur la case
 */
void Tile::setBallOn(bool presence) {
	ballOn_ = presence;
}

/**
 * @brief Méthode permettant d'obtenir le statut d'une case dans un string pour toute utilisation future
 * @return une chaine de caractère indiquant le statut de la case
 */
string Tile::toString() {
	if (playerOn_ != NULL) {
		return("La case au coordonnées (" + x_ + ", " + y_ + ") contient le joueur " + playerOn_.toString() + ".");
	} else if (ballOn_ = true) {
		return("La case au coordonnées (" + x_ + ", " + y_ + ") contient la balle.");
	} else {
		return("La case au coordonnées (" + x_ + ", " + y_ + ") est vide.")
	}
}
