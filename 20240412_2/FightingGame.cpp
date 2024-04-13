#include "FightingGame.h"

FightingGame::FightingGame()
{
}

FightingGame::~FightingGame()
{
	delete print;
}

void FightingGame::PlayGame()
{
	int PlayMode = StartScene();

	if (PlayMode == EPLAY_MODE::EXIT)
	{
		return;
	}
	else if(PlayMode == EPLAY_MODE::PLAY)
	{
		IntroScene();
		BattleScene();
	}
}

int FightingGame::StartScene()
{
	return print->IntroImagePrint();
}

void FightingGame::IntroScene()
{
	print->SelectPlayBlink();

	Sleep(800);
	system("cls");

	print->IntroScene();
	Sleep(1000);
	system("cls");
}

void FightingGame::BattleScene()
{
	print->BattleScene();
}

