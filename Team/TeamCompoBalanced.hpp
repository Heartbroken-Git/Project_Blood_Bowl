#ifndef __TeamCompoBalanced_HPP__
#define __TeamCompoBalanced_HPP__

/**
 * @file TeamCompoBalanced.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de la composition d'équipe "Équilibrée"
 */
 
#include "../Player/Player.hpp"
#include "../Race/Race.hpp"
#include "TeamCreator.hpp"

class Player;
class Race;
class TeamCreator;

/**
 * @class TeamCompoBalanced
 * @brief Classe définissant la composition d'une équipe "Équilibrée"
 * @details L'équipe est composée de 11 joueurs équilibrés en utilisant en plus la race des humains de l'Empire qui sont versatiles
 */
class TeamCompoBalanced : public virtual TeamCreator {
public:
	TeamCompoBalanced();
	~TeamCompoBalanced();
	Team createTeam(); //probablement un pointeur plutot
	
};
 
#endif
