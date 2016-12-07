/**
 * @file Elf.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source de la classe définissant la race Elf
 */
 
#include <string>
#include <iostream>
#include "Elf.hpp"

using namespace std;

/**
 * @brief Constructeur de Elf
 */
Elf::Elf() {
	Race("Elf", "\033[0;33m");
}

/**
 * @brief Destructeur vide de Elf
 */
Elf::~Elf() {}
