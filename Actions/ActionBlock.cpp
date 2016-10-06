#include <queue>
#include <vector>
#include "ActionBlock.hpp"

using namespace std;

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Interface publique
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------------
/*!
 *@brief : Create ActionBlock and set actingPlayer_
 *
*/
ActionBlock::ActionBlock(Player actingPlayer){
	actingPlayer_ = actingPlayer;
}

/*!
 *@brief : delete ActionBlock
 *
*/
ActionBlock::~ActionBlock(){}

/*!
 *@brief : get actingPlayer_
 *
*/
Player ActionBlock::getActingPlayer(){
	return actingPlayer_;
}

/*!
 *@brief : actingPlayer_ blocks an opposingPLayer in parameter
 * rolls n dice determined by position and strength value then resolve the action by these dice rolls.
 * This badboy is gonna be used often.
 * Doesn't really follow Blood Bowl rules, but it's a lot more bloody.
*/
void ActionBlock::doAction(Player oppoPlayer){
	int advantage = 1;
	int diceRes;
	int diceChoice;
	int finalRes;
	bool inControl = false;
	vector<int> diceStack;
	Dice d6(1, 6);
	
	
	
	if(actingPlayer.getStr() > oppoPlayer.getStr()){
		++advantage;
		if(actingPlayer.getStr >= oppoPlayer.getStr() * 2 + 1){
			++advantage
		}
	}else if(actingPlayer.getStr() > oppoPlayer.getStr()){
		--advantage;
		if(actingPlayer.getStr <= oppoPlayer.getStr() * 2 + 1){
			--advantage
		}
	}
	 
	if(actingPlayer_.outnumbered()){
		--advantage;
	}
	
	if(oppoPlayer.outnumbered()){
		++advantage;
	}
	
	if(advantage < 0){
		advantage *= -1;
		inControl = false;
	}
	
	if(advantage > 3){
		advantage = 3;
	}
	
	std::cout << "Vous allez lancer " <<advantage<< " dés!" <<std::endl;
	
	for(int i = 0; i <= advantage; ++i){
		diceRes = d6.throwDiceSingle()
		diceStack.push_back(diceRes);
		
		std::cout<<"Lancée "<<advantage<<"!"<<std::endl;
		
		if(diceRes == 1){
			std::cout << "Blockage echoue!" << std::endl;
		}else if(diceRes == 2){
			std::cout << "Les deux jouers à terre!" << std::endl;
		}else if(diceRes == 3 || diceRes == 4){
			std::cout << "Joueur adverse poussé!" << std::endl;
		}else if(diceRes == 5){
			std::cout << "Joueur adverse à terre!" << std::endl;
		}else if(diceRes == 6){
			std::cout << "Joueur adverse VRAIMENT à terre!" << std::endl;
		}		
	}
	
	if(diceStack.size() > 1){
		std::cout << "Choisissez quel résultat vous allez choisir!" <<std::endl;
		std::cin >> diceChoice;
		if(diceChoice>diceStack.size() || diceChoice>3){
			std::cout << "OY! Ca triche pas içi!" <<std::endl;
		}
	}else{
		diceChoice = 1;
	}
	
	finalRes = diceStack.at(diceChoice - 1);
	
	if(finalRes == 1){ //failed block, attacker down
		actingPlayer_.downed();
		std::cout << "Et voila! Il est à terre pour tenter un blockage! Comme quoi il ne faut pas embaucher des amateurs!" <<std::endl
	}else if(finalRes == 2){ //both down, unless the guy with Block skill
		if(actingPlayer_.block() && oppoPlayer.block()){ //none down
			std::cout << "Les deux joueurs se cognent et rien ne se passe!" <<std::endl;
		}else if(actingPlayer_.block()){ //opposing player down
			oppoPlayer.downed();
			std::cout << "BOOM! Ils se cognent mais un est nettement plus solide que l'autre!" <<std::endl
		}else if(oppoPlayer_.block()){//acting player down et turnover
			actingPlayer_.downed();
			std::cout << "BOOM! Ils se cognent mais un est nettement plus solide que l'autre!" <<std::endl
			actingPlayer_.turnover();
		}else{ //both down, turnover
			actingPlayer_.downed();
			oppoPlayer.downed();
			std::cout << "HA! Ils se cognent et sont tous les deux à terre!" <<std::endl
			actingPlayer_.turnover();
		}
	}else if(finalRes == 3 || finalRes == 4){ //pushed
		int spot = oppoPlayer.freeSpot();
		if(spot>0){		//if there's space, pushed to a random space. Yes, it's not REALLY Blood Bowl, but cmon, man
			oppoPlayer.pushBack();
			std::cout << "Et il s'est fait poussé!" <<std::endl;
		}else{ //if there's no space, attacking player downed
			oppoPlayer.downed();
			std::cout << "Manque de place, il s'est fait terrassé" <<std::endl;
		}
	}else if(finalRes == 5){ //knocked down with possibility to dodge, in which case it becomes pushed
		if(oppoPlayer.Dodge()){
			int spot = oppoPlayer.freeSpot();
			if(spot>0){		
				oppoPlayer.pushBack();
				std::cout << "Et il a evadé le coup!" <<std::endl
			}else{
				oppoPlayer.downed();
				std::cout << "Manque de place, il s'est fait terrassé" <<std::endl;
			}
		}else{
			oppoPlayer.downed()
			std::cout << "OUCH! Ca doit faire mal, ça!" <<std::endl;
		}
	}else(finalRes == 6){ //knocked down, no evading this bad boy
		oppoPlayer.downed()
		std::cout << "OUCH! Ca doit faire mal, ça!" <<std::endl;
	}
	
}


