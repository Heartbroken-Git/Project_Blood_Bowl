#ifndef __TeamCompoViolent_HPP__
#define __TeamCompoViolent_HPP__

/**
 * @file TeamCompoViolent.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de la composition d'équipe "Violente"
 */
 
#include "../Player/Player.hpp"
#include "../Race/Race.hpp"
#include "TeamCreator.hpp"

class Player;
class Race;
class TeamCreator;

/**
 * @class TeamCompoViolente
 * @brief Classe définissant la composition d'une équipe "Violente"
 * @details L'équipe est composée de 11 joueurs portés sur l'offensif, en plus le fait qu'ils soient orcs aide
 */
class TeamCompoViolent : public virtual TeamCreator {
public:
	TeamCompoViolent();
	~TeamCompoViolent();
	Team createTeam(); //probablement un pointeur plutot
	
};
 
#endif
