/**
 * @file TeamCompoAgile.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source de la composition d'équipe "Agile"
 */
 
#include "TeamCompoAgile.hpp"

using namespace std;

/**
 * @brief Constructeur vide de TeamCompoAgile
 */
TeamCompoAgile::TeamCompoAgile() {}

/**
 * @brief Destructeur vide de TeamCompoAgile
 */
TeamCompoAgile::~TeamCompoAgile() {}

/**
 * @brief Méthode construisant l'équipe avec une composition et une Race la rendant agile
 */	
Team TeamCompoAgile::createTeam() {
	Elf outputRace;
	Team outputTeam("Faathlolror", outputRace);
	
	Lineman p1("Hurthyal The Flamboyant", "elf");
	Lineman p2("Kintan The Loyal", "elf");
	Lineman p3("Yethlulin The Paragon", "elf");
	Blitzer p4("Kebal The Blessed", "elf");
	Thrower p5("Bel-shizraedror The Graceful", "elf"):
	Thrower p6("Onnazrin The Radiant", "elf");
	Thrower p7("Haanenac The Illustrious", "elf");
	Thrower p8("Violaabac The Majestic", "elf");
	Catcher p9("Haalyal The Oracle", "elf");
	Catcher p10("Shalyar The Honored", "elf");
	Catcher p11("Thelvenac The Beast", "elf");
	
	outputTeam.setPlayer(0, p1);
	outputTeam.setPlayer(1, p2);
	outputTeam.setPlayer(2, p3);
	outputTeam.setPlayer(3, p4);
	outputTeam.setPlayer(4, p5);
	outputTeam.setPlayer(5, p6);
	outputTeam.setPlayer(6, p7);
	outputTeam.setPlayer(7, p8);
	outputTeam.setPlayer(8, p9);
	outputTeam.setPlayer(9, p10);
	outputTeam.setPlayer(10, p11);
	
	return(outputTeam); //Ne marchera probablement pas, requérera des pointeurs partout pour éviter la perte des objets
}
