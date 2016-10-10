all: docs
	g++ -Wall -Werror -std=c++11 -O2 Dice.cpp -o ProjectBloodbowl
	./ProjectBloodBowl
	
docs:
	doxygen Doxyfile
