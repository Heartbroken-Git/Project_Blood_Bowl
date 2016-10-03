#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include "Dice.hpp"
#include <time.h>
#include <math.h>
#include <sstream>
#include <random>
#include <map>

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
    	int result;
    	std::random_device r;
    	
    	std::default_random_engine e1(r());
    	std::uniform_int_distribution<int> uniform_dist(1, typeDice_);
    	result = uniform_dist(e1);
    	return result;
    }

