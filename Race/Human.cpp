/**
 * @file Human.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source de la classe définissant la race Human
 */
 
#include <string>
#include <iostream>
#include "Human.hpp"

using namespace std;

/**
 * @brief Constructeur de Human
 */
Human::Human() : Race("Human", "\033[0;34m"){}

/**
 * @brief Destructeur vide de Human
 */
Human::~Human() {}
