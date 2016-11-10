#ifndef __ACTIONGOFORIT__
#define __ACTIONGOFORIT__
/**
 * @file ActionGoForIt.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 16/10/2016
 * @brief Fichier entête de l'Action Go For It
 */
 
#include <queue>
#include <vector>
#include "Actions.hpp"
#include "../Player/Player.hpp"

class Actions;
class Player;
using namespace std;

/**
 * @class ActionGoForIt
 * @brief Classe définissant l'action Go For It
 * @details L'action Go For It permet à un joueur de tenter de pousser son joueur à aller plus loin que son déplacement classique au risque de glisser le faisant tomber à terre et mettant fin au tour en cours
 */
class ActionGoForIt : public virtual Actions {
	private:
		Player actingPlayer_;
	
	public:
		ActionGoForIt(Player);
		~ActionGoForIt();
		void doAction();
		Player getActingPlayer();
		
};

#endif
