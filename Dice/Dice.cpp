#include <bitset>
#include <iostream>
#include <cassert>
#include <cmath>
#include "Dice.hpp"
#include <time.h>
#include <math.h>
#include <vector>
#include <sstream>

using namespace std;

	/*!
     *@brief Constructeur des Dice
     *@param nbDice : int du nombre de dé à lancer dans un jet
     *@param typeDice : int du type de dé à lancer (d6, d8, etc)
     *@pre nbDice et typeDice > 0  
     *@complexite Constante
    */
	Dice::Dice(int nbDice, int typeDice){
		nbDice_ = nbDice;
		typeDice_ = typeDice;
	}

	/*!
     *@brief Destructeur de Dice
     */
	Dice::~Dice(){
		std::cout<<"Dice reset." << std::endl;
	}

	/*!
     *@brief getter nbDice_
     *@complexite Constante
    */
    int Dice::getNbDice(){
    	return nbDice_;
    }

	 /*!
     *@brief getter typeDice_
     *@complexite Constante
    */
    int Dice::getTypeDice(){
    	return typeDice_;
    }
    
    /*!
     *@brief setter nbDice_
     *@complexite Constante
    */
    void Dice::setNbDice(int nbDice){
    	nbDice_ = nbDice;
    }
    
    /*!
     *@brief setter typeDice_
     *@complexite Constante
    */
    void Dice::setTypeDice(int typeDice){
    	typeDice_ = typeDice;
    }

    /*!
     *@brief lance un dé de type typeDice_ une seule fois
    */
    int Dice::throwDiceSingle(){
    	int result = 1;
    	int cmpt;
    	for(cmpt = 1; cmpt < typeDice_; ++cmpt){
   		//voir le résultat d'un dé lancé. 
    	//cmpt strictement inférieur car result a pour min 1. 
    	//Pour éviter d'avoir un résultat de 7 sur un d6.
    		srand (time(NULL)); //initialise le randomiser
    		result += rand() % 1; //rand() donne soit un 0 soit
    	}
    	return result;
    }

	/*!
     *@brief Donne le résultat d'un lancer de nbDice_ dés de même type. Lance typeDice_ nbDice_ fois en ajoutant la valeur qui sera retourné.  
    */    
    int Dice::throwDice(){
    	int result = 1;
    	int cmpt;
    	for(cmpt = 1; cmpt <= nbDice_; ++cmpt){ //nd de dés à lancer
    		throwDiceSingle();
    	}    	
    	return result;
    }

	/*!
     *@brief override throwDice() pour lancer deux dés de types différentes. Par exemple lance 2d6 et 3d8
    */
    int Dice::throwDice(Dice dice){
    	int result = this->throwDice() + dice.throwDice();
    	return result;    	
    }
    
     /*!
     *@brief return les chiffres de deux (on n'utilise pas plus que deux, c'est Blood Bowl, pas D&D) dés lancés dans l'ordre
     *@brief retorune un int, on met le résultat de chaque lancer dans un vector, puis in met chaque chiffre en string avant de les concatener
     *@brief ensuite nous allons les retransformer en int, ce qui sera retourné.
     **ALERT : a changer, voir smart pointers
    */
    int Dice::throwDiceDigit(){
    	std::vector<int> stock;
    	string chain, chain2;
    	ostringstream convert;
    	int result;
    	
    	stock[0] = throwDiceSingle();
    	stock[1] = throwDiceSingle();
    	
    	//transformer chaque chiffre en string
    	convert << stock[0];
    	chain = convert.str();
    	
    	convert << stock[1];
    	chain2 = convert.str();
    	
    	chain = chain + chain2;
    	
    	//transformer chain en int de 2 chiffres
    	if(!(istringstream(chain) >> result) ) result = 0;    	
    	    	
    	return result;
    }
    
    /*!
     *@brief return les chiffres de deux (on n'utilise pas plus que deux, c'est Blood Bowl, pas D&D) dés lancés dans l'ordre, ceci est un overload pour deux dés de types différentes
     *ATTENTION: return un tableau de deux int ou une classe Pair??
     *ALERT : a changer, voir smart pointers
    */
    int Dice::throwDiceDigit(Dice dice){ 
    	std::vector<int> stock;
    	string chain, chain2;
    	ostringstream convert;
    	int result;
    	    	
    	stock[0] = this->throwDiceSingle();
    	stock[1] = dice.throwDiceSingle();
    	//transformer chaque chiffre en string
    	convert << stock[0];
    	chain = convert.str();
    	
    	convert << stock[1];
    	chain2 = convert.str();
    	
    	chain = chain + chain2;
    	
    	//transformer chain en int de 2 chiffres
    	if(!(istringstream(chain) >> result) ) result = 0;    	
    	    	
    	return result;
    }

int main(){
	int test1, test2;
	Dice dice6; //test a faire
	Dice dice8;
	
	test1 = dice6->throwDiceDigit();
	test2 = dice6->throwDiceDigit(dice8);
	
	
	cout << test1 << endl;
	cout << test2 << endl;
}

