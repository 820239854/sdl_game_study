#include "Game.h"

int main(int argc, char * argv[])
{
	Game game;
	game.Initialize();
	game.RunLoop();
	game.Shutdown();
	return 0;
}