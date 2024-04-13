#include "FightingGame.h"

int main()
{
	system("mode con cols=150 lines = 40 | title Mio Fratello");
	CONSOLE_CURSOR_INFO cursorInfo = {0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);


	FightingGame* game = new FightingGame;
	game->PlayGame();


	delete game;

	return 0;
}