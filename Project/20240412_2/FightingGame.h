#pragma once
#include "ImagePrint.h"

class FightingGame
{
private:
	ImagePrint* print = new ImagePrint;

public:
	FightingGame();
	~FightingGame();

	void PlayGame();
	int StartScene();
	void IntroScene();
	void BattleScene();
};

