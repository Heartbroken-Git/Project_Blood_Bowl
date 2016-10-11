all: docs
	g++ -Wall -Werror -std=c++11 -O2 Dice/Dice.cpp Main/Main.cpp -o ProjectBloodBowl
	./ProjectBloodBowl
	
docs:
	doxygen Doxyfile
