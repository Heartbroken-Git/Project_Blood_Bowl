#include <bitset>
#include <iostream>
#include <cassert>
#include <cmath>
#include "hpptemplate.hpp"
#include <vector>
#include <math.h>

using namespace std;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Interface publique
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------------
/*!
     *@brief Constructeur du Pathing
     *@param start : Case où on commence le Pathing, dest_ est égale à start
    */
Pathing::Pathing(Case start){
	start_ = start;
	dest_= start;
}

Pathing::~Pathing(){

}

 /*!
     *@brief getter du start_
     *@post return la case où le pathing commence
    */
Case Pathing::getStart(){
	return start_;
}

 /*!
     *@brief getter du dest_
     *@post return la case où le pathing est censé d'arrêter. "Censé" est ici important, car le Player peut s'arrêter à mi chemin, tel est Blood Bowl
    */
Case Pathing::getDest(){
	return dest_;
}

 /*!
     *@brief setter du start_
     *@post change où le pathing commence
    */
void Pathing::setStart(Case start){
	start_ = start;
}

 /*!
     *@brief setter du dest_
     *@post change où le pathing est censé de terminer
    */
void Pathing::setDest (Case dest){
	dest_ = dest;
	
}	
	/*!
     *@brief courir en lighe droite du start_ à dest, passant par les cases dangereuses mais pas les cases impassables.
     *@post dest_ == dest
    */
void Pathing::recklessRun(Case dest){
	//TODO
}
    
    /*!
     *@brief courir vers dest de start_ en prenant le chemin le moins dangereux possible le plus court, en valorisant la distance.
     *@post dest_ == dest
    */
void Pathing::safeRun(Case dest){
	//TODO
}
    
    /*!
     *@brief avance d'une Case disponible numGFI fois en lancant un Dice
     *@param numGFI: int donnant le lombre de cases à traverser
    */
void Pathing::goForIt(int numGFI){
	//TODO
}


