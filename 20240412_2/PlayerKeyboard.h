#pragma once
#include "GoToXY.h"
#include "PositonNum.h"
#include "EKeyboardNum.h"
#include <iostream>
#include <time.h>

class PlayerKeyboard
{
private:
	GoToXY* to = new GoToXY;

public:
	PlayerKeyboard();
	~PlayerKeyboard();

	void CleanInputBuffer();
	int IntroBoxSelect();
	int BattleBoxSelect();
	int BattleAttackSelect();

	int BattleComBoxSelect();
	int BattleComAttackSelect();

};

