#ifndef __DICE_HPP__
#define __DICE_HPP__
/**
 * @file 
 * @author 
 * @since 
 * @brief 
**/
#include <stdio.h>
#include <stdlib.h>
#include <vector>


/**
 * @brief 
 * 
 * À COMPLÉTER
**/
class Dice{
    public:
    /*!
     *@brief Constructeur des Dice
     *@param nbDice : int du nombre de dé à lancer dans un jet
     *@param typeDice : int du type de dé à lancer (d6, d8, etc)
     *@pre nbDice et typeDice > 0  
    */
    Dice(int nbDice, int typeDice);
    
     /*!
     *@brief Destructeur de Dice
     */
    ~Dice();
    
    /*!
     *@brief getter nbDice_
    */
    int getNbDice();
    
    /*!
     *@brief getter typeDice_
    */
    int getTypeDice();
    
    /*!
     *@brief setter nbDice_
    */
    void setNbDice(int nbDice);
    
    /*!
     *@brief setter typeDice_
    */
    void setTypeDice(int typeDice);
    
    /*!
     *@brief lance un dé de type typeDice_ une seule fois
    */
    int throwDiceSingle();
   
    
    
    private:
    int nbDice_;
    int typeDice_;
};

#endif
