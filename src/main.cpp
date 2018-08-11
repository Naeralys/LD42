#include <iostream>
#include "Game.hpp"

int main() {

	// Game object
	Game game;

	std::cout << "Hello World!" << std::endl;

	// Initialize game assets and libs	
	game.Init();

	// Game loop
	while( game.Running() ) {
		// Update
		game.Update();
		// Render
		game.Render();
	}
	std::cout << "Game terminated" << std::endl;
	return 0;
}
