#ifndef __TeamCreator_HPP__
#define __TeamCreator_HPP__

/**
 * @file TeamCreator.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de l'Abstract Factory TeamCreator
 */
 
#include "../Player/Player.hpp"
#include "../Race/Race.hpp"
 
class Player;
class Race;
 
/**
 * @class TeamCreator
 * @brief Classe abstraite définissant l'Abstract Factory créant les équipes
 * @details Les compositions préfaites d'équipes seront générées par des héritages concrétisant cette classe
 */
class TeamCreator {
public:
	TeamCreator() {};
	~TeamCreator() {};
	virtual Team createTeam() = 0;
	
};


#endif
