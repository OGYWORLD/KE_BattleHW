#include "PlayerKeyboard.h"

PlayerKeyboard::PlayerKeyboard()
{
	srand(time(NULL));
}

PlayerKeyboard::~PlayerKeyboard()
{
	delete to;
}

void PlayerKeyboard::CleanInputBuffer()
{
	while (_kbhit())
	{
		_getch();
	}
}

int PlayerKeyboard::IntroBoxSelect()
{
	int y = 0;
	int nKey = 0;

	while (1)
	{
		to->GoToXYPosition(INTRO_SELECT_X, INTRO_SELECT_Y + y);
		printf("¢º");
		Sleep(500);

		to->GoToXYPosition(INTRO_SELECT_X, INTRO_SELECT_Y + y);
		printf(" ");
		Sleep(500);

		if (_kbhit())
		{
			nKey = _getch();
			if (nKey == EKEYBOARDNUM::SPACE)
			{
				to->GoToXYPosition(INTRO_SELECT_X, INTRO_SELECT_Y + 9);
				break;
			}
			else if (nKey == EKEYBOARDNUM::DIRECTION)
			{
				nKey = _getch();
				if (nKey == EKEYBOARDNUM::KEY_UP)
				{
					y = 0;

				}
				else if (nKey == EKEYBOARDNUM::KEY_DOWN)
				{
					y = 2;
				}
			}

			CleanInputBuffer();
		}
	}

	return y;
}

int PlayerKeyboard::BattleBoxSelect()
{
	int x = 0;
	int nKey = 0;

	while (1)
	{
		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf("¢º");
		Sleep(500);

		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf(" ");
		Sleep(500);

		if (_kbhit())
		{
			nKey = _getch();
			if (nKey == EKEYBOARDNUM::SPACE)
			{
				break;
			}
			else if (nKey == EKEYBOARDNUM::DIRECTION)
			{
				nKey = _getch();
				if (nKey == EKEYBOARDNUM::KEY_RIGHT)
				{
					x = 48;

				}
				else if (nKey == EKEYBOARDNUM::KEY_LEFT)
				{
					x = 0;
				}
			}

			CleanInputBuffer();
		}
	}

	return x;
}

int PlayerKeyboard::BattleAttackSelect()
{
	int x = 0;
	int nKey = 0;

	while (1)
	{
		CleanInputBuffer();

		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf("¢º");
		Sleep(500);

		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf(" ");
		Sleep(500);

		if (_kbhit())
		{
			nKey = _getch();
			if (nKey == EKEYBOARDNUM::SPACE)
			{
				break;
			}
			else if (nKey == EKEYBOARDNUM::DIRECTION)
			{
				nKey = _getch();
				if (nKey == EKEYBOARDNUM::KEY_RIGHT)
				{
					x = 42;

				}
				else if (nKey == EKEYBOARDNUM::KEY_LEFT)
				{
					x = 0;
				}
			}

			CleanInputBuffer();
		}
	}

	return x;
}

int PlayerKeyboard::BattleComBoxSelect()
{
	int x = 0;
	int index = 0;

	int Random = rand() % 2;
	while (index < 2)
	{
		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf("¢º");
		Sleep(500);

		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf(" ");
		Sleep(500);

		if (Random == 0)
		{
			x = 0;
			Sleep(1000);
		}
		else
		{
			x = 48;
			Sleep(1000);
		}

		index++;
	}

	return x;
}

int PlayerKeyboard::BattleComAttackSelect()
{
	int x = 0;
	int index = 0;

	int Random = rand() % 2;
	while (index < 2)
	{
		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf("¢º");
		Sleep(500);

		to->GoToXYPosition(BATTLE_SELECT_X + x, BATTLE_SELECT_Y);
		printf(" ");
		Sleep(500);

		if (Random == 0)
		{
			x = 0;
			Sleep(1000);
			break;
		}
		else
		{
			x = 42;
			Sleep(1000);
			break;
		}

		index++;
	}

	return x;
}
