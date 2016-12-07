#ifndef __Human_HPP__
#define __Human_HPP__

/**
 * @file Human.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de la classe définissant la race Human
 */
 
#include <string>
#include <iostream>
#include "Race.hpp"

class Race;

/**
 * @class Human
 * @brief Classe définissant la race Human
 */
class Elf : public virtual Race {
protected:
	
public:
	Human();
	~Human();
	
};

#endif
