/**
 * @file TeamCompoBalanced.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source de la composition d'équipe "Équilibrée"
 */
 
#include "TeamCompoBalanced.hpp"

using namespace std;

/**
 * @brief Constructeur vide de TeamCompoBalanced
 */
TeamCompoBalanced::TeamCompoBalanced() {}

/**
 * @brief Destructeur vide de TeamCompoBalanced
 */
TeamCompoBalanced::~TeamCompoBalanced() {}

/**
 * @brief Méthode construisant l'équipe avec une composition et une Race la rendant moyenne en tout
 */	
Team TeamCompoBalanced::createTeam() {
	Human outputRace;
	Team outputTeam("Altdorf's Champions", outputRace);
	
	Lineman p1("Baldwin Sackler", "human");
	Lineman p2("Reinhard Welker", "human");
	Lineman p3("Wedekind Fahrenheit", "human");
	Lineman p4("Ingo Baum", "human");
	Lineman p5("Ingolf Kalkbrenner", "human"):
	Blitzer p6("Reimar Ammermann", "human");
	Blitzer p7("William Weber", "human");
	Thrower p8("Mombert König", "human");
	Thrower p9("Wieland Wagenseil", "human");
	Catcher p10("Ivo Eisenberg", "human");
	Catcher p11("Dietmar Rehberg", "human");
	
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
