all: docs
	g++ -Wall -Werror -std=c++11 -O2 Dice/Dice.cpp Main/Main.cpp Actions/Actions.cpp Actions/ActionBlock.cpp Actions/ActionDodge.cpp Actions/ActionFoul.cpp Actions/ActionGoForIt.cpp Actions/ActionPass.cpp Actions/ActionStandUp.cpp -o ProjectBloodBowl
	./ProjectBloodBowl
	
docs:
	doxygen Doxyfile
