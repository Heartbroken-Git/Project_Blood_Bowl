/*!
 * @file Funnel.cpp
 * @author Elbert NYUNTING
 * @brief Classe Funnel pour les commandes
 */

#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Funnel.hpp"
using namespace std;
	
/*!
* @brief Constructeur de Funnel
* @param les classes qui seront traitées, ca fait beaucoup
* 
*/
Funnel::Funnel(ActionBlock actionBlock, ActionDodge actionDodge, ActionFoul actionFoul, ActionGoFotIt actionGoForIt, ActionPass actionPass, ActionStandUp actionStandUp, Player player, Game game, Team team1, Team team2){
	
	actionBlock_ = actionBlock;
	actionDodge_ = actionDodge;
	actionFoul_ = actionFoul;
	actionGoForIt_ = actionGoForIt;
	actionPass_ = actionPass;
	actionStandUp_ = actionStandUp;
	
	player_ = player;
	game_ = game;
	team1_ = team1;
	team2_ = team2;
}

Funnel::~Funnel(){};

void Funnel::move(String direction){
	
	if(typeid(actingPlayer_.getPlayability()) == typeid(Fresh) && actingPlayer_.getMvt() > 0){
		if(typeid(actingPlayer_.getWellbeing()) == typeid(HalfHealthy)){
			actingPlayer_.setMvt(actingPlayer_.getMvt() - 3);
		}
		if(actingPlayer_.getMvt()<=1){
			actingPlayer.etatMoved();	
		}
		if(((boost::iequals(direction,"w"))||(boost::iequals(direction,"west"))||(boost::iequals(direction,"o"))||(boost::iequals(direction,"ouest"))||(boost::iequals(direction,"gauche"))||(boost::iequals(direction,"left")))&& actingPlayer_.getX() != 0 && game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()).isPlayerOn() == false){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY());
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"n"))||(boost::iequals(direction,"north"))||(boost::iequals(direction,"nord"))||(boost::iequals(direction,"up"))||(boost::iequals(direction,"haut")))&& actingPlayer_.getY() != 28 )&& game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).isPlayerOn()+1 == false){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()+1);
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"e"))||(boost::iequals(direction,"east"))||(boost::iequals(direction,"est"))||(boost::iequals(direction,"droite"))||(boost::iequals(direction,"right"))) && actingPlayer_.getX() != 15 && game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()).isPlayerOn() == false){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY());
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"s"))||(boost::iequals(direction,"south"))||(boost::iequals(direction,"sud"))||(boost::iequals(direction,"down"))||(boost::iequals(direction,"bas"))) && actingPlayer_.getY() != 0  && game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()-1).isPlayerOn() == false){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()-1);
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"nw"))||(boost::iequals(direction,"north west"))||(boost::iequals(direction,"no"))||(boost::iequals(direction,"nord ouest"))||(boost::iequals(direction,"haut gauche"))||(boost::iequals(direction,"up left"))) && actingPlayer_.getX() != 0 && actingPlayer_.getY() != 15 && game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()+1).isPlayerOn() == false ){

			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()+1);
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"ne"))||(boost::iequals(direction,"north east"))||(boost::iequals(direction,"nord est"))||(boost::iequals(direction,"up right"))||(boost::iequals(direction,"haut droite"))) && actingPlayer_.getX() != 28 && actingPlayer_.getY() != 15 && game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()+1).isPlayerOn() == false  ){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()+1);
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"se"))||(boost::iequals(direction,"south east"))||(boost::iequals(direction,"sud est"))||(boost::iequals(direction,"bas droite"))||(boost::iequals(direction,"down right"))) && actingPlayer_.getX() != 28 && actingPlayer_.getY() != 0 && game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()-1).isPlayerOn() == false ){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()-1);
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"sw"))||(boost::iequals(direction,"south west"))||(boost::iequals(direction,"sud ouest"))||(boost::iequals(direction,"down left"))||(boost::iequals(direction,"bas gauche"))) && actingPlayer_.getX() != 0 && actingPlayer_.getY() != 0 && game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()-1).isPlayerOn() == false ) ){
			Tile stock = game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY());
			stock = new Tile(actingPlayer_.getX(), actingPlayer_.getY());
			Tile newTile = game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()-1);
			newTile.setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}
		actingPlayer_.setMvt(actingPlayer_.getMvt() - 1);
	}else{
		std::cout<<"Il ne peut pas bouger!"<<endl;
		game_.turnover(actingPlayer_);
	}
}

void Funnel::tackle(Player joueurCible){

}









