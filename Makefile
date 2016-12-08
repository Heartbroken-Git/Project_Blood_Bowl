all: docs
	g++ -Wall -Werror -std=c++11 -O2 Status/Wellbeing/ATerre.cpp Status/Wellbeing/HalfHealthy.cpp Status/Wellbeing/Healthy.cpp Status/Wellbeing/KO.cpp Status/Wellbeing/Out.cpp Status/Wellbeing/Prone.cpp Status/Playability/BlitzTackled.cpp Status/Playability/Blitzed.cpp Status/Playability/Fresh.cpp Status/Playability/GFI.cpp Status/Playability/Moved.cpp Status/Playability/NotPlayable.cpp Status/Playability/Passed.cpp Status/Playability/BlitzMoved.cpp Status/Playability/Tackled.cpp Status/GameState/EndTurn.cpp Status/GameState/StartTurn.cpp Dice/Dice.cpp Race/Race.cpp Race/Elf.cpp Race/Human.cpp Race/Orc.cpp Player/Player.cpp Player/Blitzer.cpp Player/Catcher.cpp Player/Lineman.cpp Player/Thrower.cpp Team/Team.cpp Team/TeamCompoAgile.cpp Team/TeamCompoBalanced.cpp Team/TeamCompoViolent.cpp Tile/Tile.cpp Ball/Ball.cpp Grid/Grid.cpp Game/Game.cpp Actions/Actions.cpp Actions/ActionBlock.cpp Actions/ActionDodge.cpp Actions/ActionFoul.cpp Actions/ActionGoForIt.cpp Actions/ActionPass.cpp Actions/ActionStandUp.cpp Commands/Commands.cpp Commands/Funnel.cpp Main/Main.cpp -o ProjectBloodBowl 
	./ProjectBloodBowl
	
docs:
	doxygen Doxyfile
