#ifndef __ACTIONDODGE__
#define __ACTIONDODGE__
/**
 * @file ActionDodge.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 16/10/2016
 * @brief Fichier entête de l'Action Dodge
 */
 
#include <queue>
#include <vector>
#include "Actions.hpp"

class Actions;

using namespace std;

/**
 * @class ActionDodge
 * @brief Classe définissant l'action Dodge
 * @details L'action Dodge est l'acte d'un joueur d'éviter une attaque ennemie, elle dépent principalement de l'agilité du joueur attaqué
 */
class ActionDodge : public virtual Actions {
	private:
		Player actingPlayer_;
	
	public:
		ActionDodge(Player);
		~ActionDodge();
		void doAction();
		Player getActingPlayer();
		
};

#endif
