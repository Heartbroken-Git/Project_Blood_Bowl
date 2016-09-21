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
    
    /*!
     *@brief Donne le résultat d'un lancer de nbDice_ dés de même type. Lance typeDice_ nbDice_ fois en ajoutant la valeur qui sera retourné.  
    */    
    int throwDice();
    
    /*!
     *@brief override throwDice() pour lancer deux dés de types différentes. Utilisé surtout pour les jets de blessure (1d6 et 1d8) donc ne vous faites pas mal!
    */
    int throwDice(Dice dice);
        
    
    /*!
     *@brief return les chiffres de deux (on n'utilise pas plus que deux, c'est Blood Bowl, pas D&D) dés lancés dans l'ordre
     *ATTENTION: return un tableau de deux int ou une classe Pair??
     *@pre nbDice_ == 2
    */
    int throwDiceDigit();
    
    /*!
     *@brief return les chiffres de deux (on n'utilise pas plus que deux, c'est Blood Bowl, pas D&D) dés lancés dans l'ordre, ceci est un overload pour deux dés de types différentes
     *ATTENTION: return un tableau de deux int ou une classe Pair??
     *@pre nbDice_ == 2
    */
    int throwDiceDigit(Dice dice);
    
    
    private:
    int nbDice_;
    int typeDice_;
};

#endif
