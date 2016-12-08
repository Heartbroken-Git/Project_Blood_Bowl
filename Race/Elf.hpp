#ifndef __Elf_HPP__
#define __Elf_HPP__

/**
 * @file Elf.hpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier entête de la classe définissant la race Elf
 */
 
#include <string>
#include <iostream>
#include "Race.hpp"

class Race;

/**
 * @class Elf
 * @brief Classe définissant la race Elf
 */
class Elf : public virtual Race {
protected:
	
public:
	Elf();
	~Elf();
	
};

#endif
