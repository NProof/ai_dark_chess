#include <iostream>
#include "Game.h"

int main(int argc , char **argv)
{
	new Game(); // std::cout << "Take a dark chess's game." << std::endl;
	std::cout << "Join first player and second player." << std::endl;
	std::cout << "First player move in the game." << std::endl;
	std::cout << "Do" << std::endl;
	std::cout << "    Second player move in the game." << std::endl;
	std::cout << "    If ( game is over )" << std::endl;
	std::cout << "        then break." << std::endl;
	std::cout << "    First player move in the game." << std::endl;
	std::cout << "While ( game is not over )" << std::endl;
	std::cout << "If ( game's trun is first )" << std::endl;
	std::cout << "    then second player is winner." << std::endl;
	std::cout << "Else" << std::endl;
	std::cout << "    first player is winner." << std::endl;
	
	// Player first, second;
	// first.moveIn(game);
	// do{
		// second.moveIn(game);
		// if(game.over()) break;
		// first.moveIn(game);
	// }
	// while(!game.over());
	// if(game.turn)
		// std::cout << "Second player is Winner." << std::endl;
	// else
		// std::cout << "First player is Winner." << std::endl;
	return 0;
} // end main(int argc , char **argv)

