all: docs
	g++ -Wall -Werror -std=c++11 -O2 Dice/Dice.cpp Player/Player.cpp Ball/Ball.cpp Tile/Tile.cpp Grid/Grid.cpp Game/Game.cpp Actions/Actions.cpp Actions/ActionBlock.cpp Actions/ActionDodge.cpp Actions/ActionFoul.cpp Actions/ActionGoForIt.cpp Actions/ActionPass.cpp Actions/ActionStandUp.cpp Main/Main.cpp -o ProjectBloodBowl
	./ProjectBloodBowl
	
docs:
	doxygen Doxyfile
