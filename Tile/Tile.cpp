/**
 * @file Tile.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 10/07/2016
 * @brief Fichier source définissant les cases du plateau de jeu
*/
#include "Tile.hpp"
#include <sstream>
#include <memory>
#include <iostream>

/**
 * @brief Constructeur de Tile
 * @param x une coordonnee d'abscisse
 * @param y une coordonnee d'ordonnée
 * @pre x et y doivent être des coordonnées valides
 */
Tile::Tile(int x, int y) {
	x_ = x;
	y_ = y;
	playerOn_ = 0;
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
	playerOn_ = std::shared_ptr<Player> (new Player(player));
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
	playerOn_ = 0;
	ballOn_ = originalBallTile;
}

Tile::Tile(){}
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
	return *playerOn_.get();
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
	playerOn_ = std::shared_ptr<Player> (new Player(player));
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
std::string Tile::toString() {
	std::string response;	
	Player stockPlayer = *playerOn_.get();
	
	if (playerOn_ != 0) {
		response = "La case au coordonnées (" + std::to_string(x_) + ", " + std::to_string(y_) + ") contient le joueur " + stockPlayer.getName() + '.';
	} else if (ballOn_ == true) {
		response = "La case au coordonnées (" + std::to_string(x_) + ", " + std::to_string(y_) + ") contient la balle.";
	} else {
		response = "La case au coordonnées (" + std::to_string(x_) + ", " + std::to_string(y_) + ") est vide.";
	}
	return response;
}

/**
 * @brief Méthode permettant l'affichage du contenu d'une Tile pour l'affichage final
 * @display Méthode affichant le contenu de la Tile comme vierge si sans joueur, avec un ballon s'il est présent ou avec l'affichage du joueur éventuellement présent
 * @sa Fait appel à displayPlayer() du joueur si un est présent
 */
void Tile::displayTile() {
	if (playerOn_ == NULL) {
		if (ballOn_ == true) {
			cout << "◦";
		} else {
			cout << "█";
		}
	} else {
		*playerOn_->displayPlayer();
	}
}
