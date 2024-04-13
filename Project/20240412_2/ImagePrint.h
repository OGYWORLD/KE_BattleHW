#pragma once
#include "PositonNum.h"
#include "GoToXY.h"
#include "PlayerKeyboard.h"
#include "GameHandler.h"
#include "Steve.h"
#include "Villan.h"
#include <iostream>

class ImagePrint
{
private:
	GoToXY* to = new GoToXY;
	PlayerKeyboard* keyboard = new PlayerKeyboard;
	GameHandler* handle = new GameHandler;
	Steve* steve = new Steve;
	Villan* villan = new Villan;

public:
	ImagePrint();
	~ImagePrint();

	void ConvertDotSmall(int VSize, int HSize, int Ar[][SMALL_SPRITE], int OriginX, int OriginY, int ColorNum, int Reverse);
	void ConvertDotMin(int VSize, int HSize, int Ar[][EIGHT_SPRITE], int OriginX, int OriginY, int ColorNum, int Reverse);
	void ConvertDotMidium(int VSize, int HSize, int Ar[][MIDIUM_SPRITE], int OriginX, int OriginY, int ColorNum, int Reverse);

	//Intro Image
	int IntroImagePrint();
	void Leaf1();
	void Leaf2();
	void Leaf3();
	void Rose();
	void IntroBox();
	void SelectPlayBlink();

	//Intro Scene
	void IntroScene();
	void IntroText();
	void PrintText(int x, int y, char* text, int delay, int size);
	void IntroTitle();

	// Battel Scene
	void BattelSteveCharacter(int color);
	void BattelVillanCharacter(int color);

	void BattleTextBox();
	void BattleTextPrint();

	void BattleRun(int WhoSay);
	void BattleAttack(int WhoSay);

	void PrintHPBar(int CurrentHP, int x, int y);

	void BattleScene();

	// Defeat Scene
	void DisappearCharacter(int x, int y, int VSize);

	void VillanDefeat();
	void VillanDefeatText();

	void SteveDefeat();
	void SteveDefeatText();


	
};

