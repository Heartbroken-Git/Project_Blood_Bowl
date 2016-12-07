/**
 * @file TeamCompoViolent.cpp
 * @copyright WTFPL v2
 * @author Corentin CHÉDOTAL
 * @date 07/12/2016
 * @brief Fichier source de la composition d'équipe "Violente"
 */
 
#include "TeamCompoViolent.hpp"

using namespace std;

/**
 * @brief Constructeur vide de TeamCompoViolent
 */
TeamCompoViolent::TeamCompoViolent() {}

/**
 * @brief Destructeur vide de TeamCompoViolent
 */
TeamCompoViolent::~TeamCompoViolent() {}

/**
 * @brief Méthode construisant l'équipe avec une composition et une Race la rendant particulièrement aggressive
 */	
Team TeamCompoViolent::createTeam() {
	Orc outputRace;
	Team outputTeam("Bomgut", outputRace);
	
	Lineman p1("Atok", "orc");
	Lineman p2("Vudrud", "orc");
	Lineman p3("Krurud", "orc");
	Lineman p4("Kidzoz", "orc");
	Lineman p5("Jaznig", "orc"):
	Lineman p6("Muhzruz", "orc");
	Blitzer p7("Umguz", "orc");
	Blitzer p8("Otguk", "orc");
	Thrower p9("Bruzhad", "orc");
	Catcher p10("Jorlug", "orc");
	Catcher p11("Krugzac", "orc");
	
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
