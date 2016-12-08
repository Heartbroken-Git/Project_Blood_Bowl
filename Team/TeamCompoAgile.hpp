#ifndef __TeamCompoAgile_HPP__
#define __TeamCompoAgile_HPP__

/**
 * @file TeamCompoAgile.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de la composition d'équipe "Agile"
 */
 
#include "../Player/Player.hpp"
#include "../Race/Race.hpp"
#include "TeamCreator.hpp"

class Player;
class Race;
class TeamCreator;

/**
 * @class TeamCompoAgile
 * @brief Classe définissant la composition d'une équipe "Agile"
 * @details L'équipe est composée de 11 joueurs assez rapides et agiles et ici on choisit la race des elfes pour cette équipe mais une autre composition pourrait être faite pour faire une équipe agiles avec les autres races
 */
class TeamCompoAgile : public virtual TeamCreator {
public:
	TeamCompoAgile();
	~TeamCompoAgile();
	Team createTeam(); //probablement un pointeur plutot
	
};
 
#endif
