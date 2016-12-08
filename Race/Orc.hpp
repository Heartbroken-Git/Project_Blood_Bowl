#ifndef __Orc_HPP__
#define __Orc_HPP__

/**
 * @file Orc.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de la classe définissant la race Orc
 */
 
#include <string>
#include <iostream>
#include "Race.hpp"

class Race;

/**
 * @class Orc
 * @brief Classe définissant la race Orc
 */
class Orc : public virtual Race {
protected:
	
public:
	Orc();
	~Orc();
	
};

#endif
