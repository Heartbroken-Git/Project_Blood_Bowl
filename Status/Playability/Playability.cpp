/**
 * @file Playability.cpp
 * @copyright WTFPL v2
 * @author Elbert NYUNTING
 * @date 24/11/2016
 * @brief Fichier cpp de la classe virtuelle Playability
*/

#include "Playability.hpp"

using namespace std;

/**
 * @brief Constructeur de Playability
 */
Playability::Playability(){}


/**
 * @brief Destructeur de Playability
 */
Playability::~Playability(){}


std::shared_ptr<Playability> Playability::donePlaying(){}
std::shared_ptr<Playability> Playability::GoForIt(){}
std::shared_ptr<Playability> Playability::passer(){}
std::shared_ptr<Playability> Playability::tackle(){}
std::shared_ptr<Playability> Playability::blitz(){}
std::shared_ptr<Playability> Playability::moving(){}
std::shared_ptr<Playability> Playability::startPlaying(){}
std::shared_ptr<Playability> Playability::PlayabilityMovement(){}
std::shared_ptr<Playability> Playability::PlayabilityTackle(){}
