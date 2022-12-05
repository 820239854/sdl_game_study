#include "raylib.h"
#include "Game.h"
#include "Actor.h"

int main() {
	Game game;
	Actor actor(&game);
	game.Initialize();
	game.RunLoop();
	game.Shutdown();
	return 0;
}