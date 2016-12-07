#ifndef __Race_HPP__
#define __Race_HPP__

/**
 * @file Race.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête des classes définissant les Race
 */
 
#include <string>
#include <iostream>

using namespace std;

/**
 * @class Race
 * @brief Classe "abstraite" définissant les Race
 */
class Race {
protected:
	string nomRace;
	string colorationRace;
	
public:
	Race(string, string);
	~Race();
	string getNomRace();
	string getColorationRace();
	
};

#endif
