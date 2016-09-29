#ifndef __PATHING_HPP__
#define __PATHING_HPP__
/**
 * @file 
 * @author 
 * @since 
 * @brief 
**/

#include <queue>
#include <vector>

/**
 * @brief 
 * 
 * À COMPLÉTER
**/
class Pathing{
    public:
     /*!
     *@brief Constructeur du Pathing
     *@param start : Case où on commence le Pathing, dest_ est égale à start
    */
    Pathing(Case start);
    ~Pathing();
    
    /*!
     *@brief getter du start_
     *@post return la case où le pathing commence
    */
    Case getStart();
    
    /*!
     *@brief getter du dest_
     *@post return la case où le pathing est censé d'arrêter. "Censé" est ici important, car le Player peut s'arrêter à mi chemin, tel est Blood Bowl
    */
    Case getDest();
    
    /*!
     *@brief setter du start_
     *@post change où le pathing commence
    */
    void setStart(Case start);
    
    /*!
     *@brief setter du dest_
     *@post change où le pathing est censé de terminer
    */
    void setDest (Case dest);
    
    /*!
     *@brief courir en lighe droite du start_ à dest, passant par les cases dangereuses mais pas les cases impassables.
     *@post dest_ == dest
    */
    void recklessRun(Case dest);
    
    /*!
     *@brief courir vers dest de start_ en prenant le chemin le moins dangereux possible le plus court, en valorisant la distance.
     *@post dest_ == dest
    */
    void safeRun(Case dest);
    
    /*!
     *@brief avance d'une Case disponible numGFI fois en lancant un Dice
     *@param numGFI: int donnant le lombre de cases à traverser
    */
    void goForIt(int numGFI);
    
    private:
    Case start_; //start of Pathing
    Case dest_; //finish line of Pathing
};

#endif
