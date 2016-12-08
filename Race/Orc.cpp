/**
 * @file Orc.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source de la classe définissant la race Orc
 */
 
#include <string>
#include <iostream>
#include "Orc.hpp"

using namespace std;

/**
 * @brief Constructeur de Orc
 */
Orc::Orc() : Race("Orc", "\033[0;32m") {}

/**
 * @brief Destructeur vide de Orc
 */
Orc::~Orc() {}
