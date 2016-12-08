/*!
 * @file Funnel.cpp
 * @author Elbert NYUNTING
 * @brief Classe Funnel pour les commandes du jeu
 */

#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "Funnel.hpp"
using namespace std;
	
/*!
* @brief Constructeur de Funnel
* 
*/
Funnel::Funnel(/*ActionBlock actionBlock, ActionDodge actionDodge, ActionFoul actionFoul, ActionGoFotIt actionGoForIt, ActionPass actionPass, ActionStandUp actionStandUp,*/ Player player, Game game, Team team1, Team team2){
	/*
	* Pas besoin de les mettre en attribut, ils vont etre crée (par smart pointer, voyons) dans les méthodes.
	*/
	/*actionBlock_ = actionBlock;
	actionDodge_ = actionDodge;
	actionFoul_ = actionFoul;
	actionGoForIt_ = actionGoForIt;
	actionPass_ = actionPass;
	actionStandUp_ = actionStandUp;*/
	
	player_ = player;
	game_ = game;
	team1_ = team1;
	team2_ = team2;
}

Funnel::~Funnel(){};


/*!
* @brief mouvement d'un joueur. On unset le Tile où le joueur se placait et on set un des 8 Tiles autout où le joueur y était (en regardant la direction en parametre) avec ce joueur
* @warning SI cette case est libre. S'il y a une balle, le joueur prend automatiquement la balle (je suis gentil comme ca)
* 
*/
void Funnel::move(String direction){	
	if(typeid(actingPlayer_.getPlayability()) == typeid(Fresh) && actingPlayer_.getMvt() > 0){
		if(typeid(actingPlayer_.getWellbeing()) == typeid(HalfHealthy)){
			actingPlayer_.setMvt(actingPlayer_.getMvt() - 3);
		}
		if(((boost::iequals(direction,"w"))||(boost::iequals(direction,"west"))||(boost::iequals(direction,"o"))||(boost::iequals(direction,"ouest"))||(boost::iequals(direction,"gauche"))||(boost::iequals(direction,"left")))&& actingPlayer_.getX() != 0 && game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()).isPlayerOn() == false){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"n"))||(boost::iequals(direction,"north"))||(boost::iequals(direction,"nord"))||(boost::iequals(direction,"up"))||(boost::iequals(direction,"haut")))&& actingPlayer_.getY() != 28 )&& game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).isPlayerOn()+1 == false){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()+1).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"e"))||(boost::iequals(direction,"east"))||(boost::iequals(direction,"est"))||(boost::iequals(direction,"droite"))||(boost::iequals(direction,"right"))) && actingPlayer_.getX() != 15 && game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()).isPlayerOn() == false){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"s"))||(boost::iequals(direction,"south"))||(boost::iequals(direction,"sud"))||(boost::iequals(direction,"down"))||(boost::iequals(direction,"bas"))) && actingPlayer_.getY() != 0  && game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()-1).isPlayerOn() == false){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()-1).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"nw"))||(boost::iequals(direction,"north west"))||(boost::iequals(direction,"no"))||(boost::iequals(direction,"nord ouest"))||(boost::iequals(direction,"haut gauche"))||(boost::iequals(direction,"up left"))) && actingPlayer_.getX() != 0 && actingPlayer_.getY() != 15 && game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()+1).isPlayerOn() == false ){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()+1).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"ne"))||(boost::iequals(direction,"north east"))||(boost::iequals(direction,"nord est"))||(boost::iequals(direction,"up right"))||(boost::iequals(direction,"haut droite"))) && actingPlayer_.getX() != 28 && actingPlayer_.getY() != 15 && game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()+1).isPlayerOn() == false  ){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()+1).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"se"))||(boost::iequals(direction,"south east"))||(boost::iequals(direction,"sud est"))||(boost::iequals(direction,"bas droite"))||(boost::iequals(direction,"down right"))) && actingPlayer_.getX() != 28 && actingPlayer_.getY() != 0 && game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()-1).isPlayerOn() == false ){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX()+1, actingPlayer_.getY()-1).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}else if(((boost::iequals(direction,"sw"))||(boost::iequals(direction,"south west"))||(boost::iequals(direction,"sud ouest"))||(boost::iequals(direction,"down left"))||(boost::iequals(direction,"bas gauche"))) && actingPlayer_.getX() != 0 && actingPlayer_.getY() != 0 && game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()-1).isPlayerOn() == false ) ){
			game_.getGrid().getTile(actingPlayer_.getX(), actingPlayer_.getY()).unsetPlayerOn();
			game_.getGrid().getTile(actingPlayer_.getX()-1, actingPlayer_.getY()-1).setPlayerOn(actingPlayer_);
			if (newTile.isBallOn()){
				game_.getBall().setHolder(Player actingPlayer_);
			}
		}
		actingPlayer_.setMvt(actingPlayer_.getMvt() - 1);
		if(actingPlayer_.getMvt()==0){
			actingPlayer.etatMoved();	
		}
	}else{
		std::cout<<"Il ne peut pas bouger !"<<endl;
		game_.turnover(actingPlayer_);
	}
}

/////////////////////////////////////////Commandes Actions/////////////////////////////////////////////////////////////
/*
* @brief tackle(Player joueurCible), blitz(), foul(Player joueurCible), goForIt(String direction) et standUp(). Les classes venant d'action. Il crée un smart pointer vers la classe action enquestion, et le fait activer. On est méchant içi donc si un joueur fait une action qu'il n'est pas censé de faire, c'est turnover
* @param Le joueur cible s'il y en a. Ce joueur peut être de n'importe quel équipe. Si on veut tackler un ami ou passer la balle à un adversaire, on peut.
*/
void Funnel::tackle(Player joueurCible){
	if((typeid(actingPlayer_.getPlayability()) == typeid(Fresh) && typeid(actingPlayer_.getWellbeing()) == typeid(Healthy)) && (typeid(joueurCible.getWellbeing()) == typeid(Healthy) || typeid(joueurCible.getWellbeing()) == typeid(Healthy)) ){
		std::shared_ptr<ActionBlock> block = std::make_shared<ActionBlock>(actingPlayer_);
		block->doAction(joueurCible);
		delete block;
	}else{
		std::cout<<"L'adversaire ne peut pas être bloqué !"<<endl;
		game_.turnover(actingPlayer_);
	}
}

void Funnel::blitz(){
	if(typeid(actingPlayer_.getPlayability()) == typeid(Fresh) && typeid(actingPlayer_.getWellbeing()) == typeid(Healthy)){
		actingPlayer.etatBlitz();
	}else{
		std::cout<<"Il ne peut pas blitzé !"<<endl;
		game_.turnover(actingPlayer_);
	}
}

void Funnel::pass(Player joueurCible){
	if(typeid(actingPlayer_.getPlayability()) != typeid(Passed) && actingPlayer_.getPlayability()) != typeid(NotPlayable) && actingPlayer_.getPlayability()) != typeid(Blitzed)){
		std::shared_ptr<ActionPass> pass = std::make_shared<ActionPass>(actingPlayer_);
		pass->doAction(joueurCible);
		delete pass;
	}else{
		std::cout<<"Il ne peut pas passer la balle !"<<endl;
		game_.turnover(actingPlayer_);
	}
}

void Funnel::foul(Player joueurCible){
	if(typeid(actingPlayer_.getPlayability()) == typeid(Fresh) && typeid(actingPlayer_.getWellbeing()) == typeid(Healthy)){
		std::shared_ptr<ActionFoul> foul = std::make_shared<ActionFoul>(actingPlayer_);	
		foul->doAction(joueurCible);
		delete foul;
	}else{
		std::cout<<"Il ne peut pas tricher, donc vous ne pouvez pas tricher !"<<endl;
		game_.turnover(actingPlayer_);
	}
}


void Funnel::standUp(){
	if(typeid(actingPlayer_.getPlayability()) == typeid(Fresh) && typeid(actingPlayer_.getWellbeing()) == typeid(ATerre)){
		std::shared_ptr<ActionStandUp> up = std::make_shared<ActionStandUp>(actingPlayer_);	
		up->doAction();
		delete up;
	}else{
		std::cout<<"Il ne peut pas se lever !"<<endl;
		game_.turnover(actingPlayer_);
	}
}
/*
* @brief Un peu particulier celui la, il permet à un joueur de go for it deux fois. Il ne peut go for it seulemnt s'il a déjà bougé au maximum, et la deuxième fois est forcement son dernier action.
*/
void Funnel::goForIt(String direction){
	if(typeid(actingPlayer_.getPlayability()) == typeid(Moved) && typeid(actingPlayer_.getWellbeing()) == typeid(Healthy)){
		std::shared_ptr<ActionGoForIt> gfi = std::make_shared<ActionGoForIt>(actingPlayer_);	
		gfi->doAction();
		if(typeid(actingPlayer_.getWellbeing()) != typeid(ATerre)){
			move(String direction);
			actingPlayer.etatGFI();
		}
		delete gfi;
	}else if(typeid(actingPlayer_.getPlayability()) == typeid(GFI) && typeid(actingPlayer_.getWellbeing()) == typeid(Healthy)){
		std::shared_ptr<ActionGoForIt> gfi = std::make_shared<ActionGoForIt>(actingPlayer_);	
		gfi->doAction();
		if(typeid(actingPlayer_.getWellbeing()) != typeid(ATerre)){
			move(String direction);
			actingPlayer.etatDonePlaying();
		}
		delete gfi;
	}else{
		std::cout<<"Il ne peut pas aller plus loin !"<<endl;
		game_.turnover(actingPlayer_);
	}
}

void Funnel::donePlaying(){
	if(typeid(actingPlayer_.getPlayability()) != typeid(NotPlayable)){
		actingPlayer.etatDonePlaying();
	}else{
		std::cout<<"Il ne peut déjà pas jouer !"<<endl;
		game_.turnover(actingPlayer_);
	}
}
/////////////////////////////////////////////////////Commandes Jeu///////////////////////////////////////////////

Player Funnel::findPlayer(std::String name){
	/*
	* recherche dans Team1
	*/	
	for (int i = 0; i < GLOBAL_CONST_TEAMROSTERSIZE; ++i) {
		if (game_.getTeam1().getPlayer(i).getName() == name) {
			return game_.getTeam1().getPlayer(i).;
		}
	}
	
	/*
	* recherche dans Team2
	*/
	for (int i = 0; i < GLOBAL_CONST_TEAMROSTERSIZE; ++i) {
		if (game_.getTeam2().getPlayer(i).getName() == name) {
			return game_.getTeam1().getPlayer(i).;
		}
	}
}










