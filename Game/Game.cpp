/**
 * @file Game.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @author Elbert NYUNTING
 * @date 08/12/2016
 * @brief Fichier source de la classe décrivant la partie en cours
 */

#include "Game.hpp"

using namespace std;

/**
 * @brief Constructeur de Game
 * @param ball la Ball qui sera utilisée durant la partie
 * @param t1 la Team choisie par le joueur 1
 * @param t2 la Team choisie par le joueur 2
 */
Game::Game(Ball ball, Team t1, Team t2){
    ball_ = ball;
    team1_ = t1;
    team2_ = t2;
}

/**
 * @brief Destructeur de Game
 */
Game::~Game(){
    std::cout<<"Game ended."<<std::endl;
}

/**
 * @brief Accesseur à la Ball de la partie
 * @return la Ball utilisée par la Game en cours
 */
Ball Game::getBall(){
  return ball_;
}

/**
 * @brief Méthode retournant la distance séparant deux joueurs
 * @param player1 le premier Player dont on veut la distance le séparant du deuxième
 * @param player2 le deuxième Player dont on veut la distance le séparant du premier
 * @return un entier donnant la distance en nombre de Tile séparant player1 de player2
 */
int Game::tileDist(Player player1, Player player2) {
	int p1x, p1y, p2x, p2y;
	int res = 0;
	for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
		for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
			if (grid_.getTile(i, j).getPlayerOn() == player1) {
				p1x = grid_.getTile(i, j).getX();
				p1y = grid_.getTile(i, j).getY();
			}
			if (grid_.getTile(i, j).getPlayerOn() == player2) {
				p2x = grid_.getTile(i, j).getX();
				p2y = grid_.getTile(i, j).getY();
			}
		}
	}
	
	if (p1x > p2x) {
		res = p1x - p2x;
	} else {
		res = p2x - p1x;
	}
	if (p1y > p2y) {
		res += p1y - p2y;
	} else {
		res += p2y - p1y;
	}
	
	return(res);
}

/**
 * @brief Méthode indiquant si un Player se trouve à coté d'un autre
 * @param player1 le premier Player dont on cherche l'adjacence avec le second
 * @param player2 le second Player dont on cherche l'adjacence avec le premier
 * @return un booléen marquant vrai si player1 et player2 sont adjacents et faux sinon
 * @warning Retournera faux si on teste un joueur avec lui-même
 */
bool Game::nextToPlayer(Player player1, Player player2) {
	return (tileDist(player1, player2) == 1);
}

/**
 * @brief Méthode retournant le nombre de joueurs se trouvant adjacents à un joueur
 * @param player le joueur à partir duquel on cherche le nombre d'autres joueurs adjacents
 * @return un entier étant le nombre de joueurs adjacents à player
 */
int Game::oppoAdjac(Player player) {
	int nbAdjac = 0;
	int pX, pY;
	int equipePlayer = 0;
	for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
		for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
			if (grid_.getTile(i, j).getPlayerOn() == player) {
				pX = grid_.getTile(i, j).getX();
				pY = grid_.getTile(i, j).getY();
			}
			
		}
	}
	
	equipePlayer = getPlayerTeam(player);
	
	
	for (int i = pX - 1; i <= pX + 1; ++i) {
		for (int j = pY -1; j <= pY + 1; ++j) {
			if (grid_.getTile(i, j).getPlayerOn() != NULL 
				&& grid_.getTile(i, j).getPlayerOn() != player 
				&& equipePlayer != getPlayerTeam(grid_.getTile(i, j).getPlayerOn())) {
				nbAdjac++;
			}
		}
	}
}

Team Game::getTeam1(){
	return team1_;
}

Team Game::getTeam2(){
	return team2_;
}

/**
 * @brief Méthode retournant l'équipe dans laquelle se trouve un joueur donné
 * @param player le Player recherché
 * @return un entier indiquant l'équipe à laquelle player appartient, retourne -1 s'il n'a pas été trouvé
 */
int Game::getPlayerTeam(Player player) {
	for (int i = 0; i < GLOBAL_CONST_TEAMROSTERSIZE; ++i) {
		if (team1_.getPlayer(i) == player) {
			return 1;
		} else if (team2_.getPlayer(i) == player) {
			return 2;
		}
	}
	return -1;
}

/**
 * @brief Méthode gérant l'arrêt intempestif d'un tour, fait appel à endTurn normal avec un cout qui balance le joueur qui a merdé
 * @param player le Player ayant causé l'arrêt du tour
 */ 
void Game::turnover(Player player) { 
	this.endTurn();
	cout<<player<<" à fait une connerie, turnover !"<<endl;
}

/**
 * @brief Méthode gérant l'arrêt normal d'un tour
 */ 
void Game::endTurn() { 
	if(typeid(gameStateTeam1_) == typeid(StartTurn)){
		std::shared_ptr<GameState> stockGameState = gameStateTeam1_ -> endTurnNormal();
		delete gameStateTeam1_;
		gameStateTeam1_ = stockGameState;
	}
	if(typeid(gameStateTeam2_) == typeid(StartTurn)){
		std::shared_ptr<GameState> stockGameState = gameStateTeam2_ -> endTurnNormal();
		delete gameStateTeam2_;
		gameStateTeam2_ = stockGameState;
	}
}

/**
 * @brief Méthode gérant le début d'un tour
 */ 
void Game::startTurn() { 

	
	if(typeid(gameStateTeam1_) == typeid(EndTurn)){
		std::shared_ptr<GameState> stockGameState = gameStateTeam1_ -> startTurn();
		delete gameStateTeam1_;
		gameStateTeam1_ = stockGameState;
	}
	if(typeid(gameStateTeam2_) == typeid(EndTurn)){
		std::shared_ptr<GameState> stockGameState = gameStateTeam2_ -> startTurn();
		delete gameStateTeam2_;
		gameStateTeam2_ = stockGameState;
	}
}

/**
 * @brief Méthode retournant un eniter indiquant la supériorité numérique ou non d'une équipe autour d'un joueur
 * @param player le Player autour duquel le calcul est centré
 * @return un entier indiquant la supériorité numérique de l'équipe du joueur (ou infériorité si l'entier est négatif)
 */
int Game::outnumbered(Player player) {
	int nbAdjacAllies = 0;
	int pX, pY;
	int equipePlayer = 0;
	for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
		for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
			if (grid_.getTile(i, j).getPlayerOn() == player) {
				pX = grid_.getTile(i, j).getX();
				pY = grid_.getTile(i, j).getY();
			}
			
		}
	}
	
	equipePlayer = getPlayerTeam(player);
	
	
	for (int i = pX - 1; i <= pX + 1; ++i) {
		for (int j = pY -1; j <= pY + 1; ++j) {
			if (grid_.getTile(i, j).getPlayerOn() != NULL 
				&& grid_.getTile(i, j).getPlayerOn() != player 
				&& equipePlayer == getPlayerTeam(grid_.getTile(i, j).getPlayerOn())) {
				++nbAdjacAllies;
			}
		}
	}
	
	return(nbAdjacAllies - oppoAdjac(player));
}

/**
 * @brief Méthode retournant le nombre d'emplacements libres autour d'un joueur
 * @param player le Player autour duquel on vérifie si les cases sont libres
 * @return un entier donnant le nombre d'emplacements libres autour de player
 */
int Game::freeSpot(Player player) {
	int nbFreeSpots = 0;
	int pX, pY;
	
	for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
		for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
			if (grid_.getTile(i, j).getPlayerOn() == player) {
				pX = grid_.getTile(i, j).getX();
				pY = grid_.getTile(i, j).getY();				
			}
		}
	}
	
	for (int i = pX - 1; i <= pX + 1; ++i) {
		for (int j = pY -1; j <= pY + 1; ++j) {
			if (!(grid_.getTile(i, j).isPlayerOn())) {
				++nbFreeSpots;
			}
		}
	}
	
	return(nbFreeSpots);
}

/**
 * @brief Méthode poussant un joueur de sa case à la première case adjacente libre trouvée
 * @param oppoPlayer le joueur repoussé
 */
void Game::pushBack(Player oppoPlayer){
	if (freeSpot(oppoPlayer) != 0) {
		int pX, pY;
		int arrivalX = -1;
		int arrivalY = -1;
		
		for (int i = 0; i < GLOBAL_CONST_GRIDABS; ++i) {
			for (int j = 0; j < GLOBAL_CONST_GRIDORD; ++j) {
				if (grid_.getTile(i, j).getPlayerOn() == player) {
					pX = grid_.getTile(i, j).getX();
					pY = grid_.getTile(i, j).getY();				
				}
			}
		}
		
		for (int i = pX - 1; i <= pX + 1; ++i) {
			for (int j = pY -1; j <= pY + 1; ++j) {
				if (!(grid_.getTile(i, j).isPlayerOn())) {
					arrivalX = i;
					arrivalY = j;
				}
			}
		}
		
		if (arrivalX >= 0 && arrivalY >= 0) {
			grid_.getTile(arrivalX, arrivalY).setPlayerOn(oppoPlayer);
			grid_.getTile(pX, pY).setPlayerOn(NULL);
		}
	}
}
