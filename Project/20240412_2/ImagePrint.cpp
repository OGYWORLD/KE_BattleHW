#include "ImagePrint.h"


ImagePrint::ImagePrint()
{
}

ImagePrint::~ImagePrint()
{
	delete to;
	delete keyboard;
	delete handle;
	delete steve;
	delete villan;
	delete music;
}

int ImagePrint::IntroImagePrint()
{
	music->PlayStartSceneMusic();
	IntroTitle();
	Leaf1();
	Leaf2();
	Leaf3();
	Rose();
	IntroBox();
	return keyboard->IntroBoxSelect();

}


void ImagePrint::ConvertDotSmall(int VSize, int HSize, int Ar[][SMALL_SPRITE], int OriginX, int OriginY, int ColorNum, int Reverse)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);

	if (Reverse == 0)
	{
		for (int i = 0; i < VSize; i++)
		{
			for (int j = 0; j < HSize; j++)
			{
				if (Ar[i][j] == 1)
				{
					to->GoToXYPosition(OriginX + j, OriginY + i);
					printf("■");
				}
			}
			std::cout << "\n";
		}
	}
	else
	{
		for (int i = VSize; i > 0; i--)
		{
			for (int j = HSize; j > 0; j--)
			{
				if (Ar[i][j] == 1)
				{
					to->GoToXYPosition(OriginX + j, OriginY + i);
					printf("■");
				}
			}
			std::cout << "\n";
		}
	}
}

void ImagePrint::ConvertDotMin(int VSize, int HSize, int Ar[][EIGHT_SPRITE], int OriginX, int OriginY, int ColorNum, int Reverse)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);

	if (Reverse == 0)
	{
		for (int i = 0; i < VSize; i++)
		{
			for (int j = 0; j < HSize; j++)
			{
				if (Ar[i][j] == 1)
				{
					to->GoToXYPosition(OriginX + j, OriginY + i);
					printf("■");
				}
			}
			std::cout << "\n";
		}
	}
	else
	{
		for (int i = VSize; i > 0; i--)
		{
			for (int j = HSize; j > 0; j--)
			{
				if (Ar[i][j] == 1)
				{
					to->GoToXYPosition(OriginX + j, OriginY + i);
					printf("■");
				}
			}
			std::cout << "\n";
		}
	}
}

void ImagePrint::ConvertDotMidium(int VSize, int HSize, int Ar[][MIDIUM_SPRITE], int OriginX, int OriginY, int ColorNum, int Reverse)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);

	if (Reverse == 0)
	{
		for (int i = 0; i < VSize; i++)
		{
			for (int j = 0; j < HSize; j++)
			{
				if (Ar[i][j] == 1)
				{
					to->GoToXYPosition(OriginX + j, OriginY + i);
					printf("■");
				}
			}
			std::cout << "\n";
		}
	}
	else
	{
		for (int i = VSize; i > 0; i--)
		{
			for (int j = HSize; j > 0; j--)
			{
				if (Ar[i][j] == 1)
				{
					to->GoToXYPosition(OriginX + j, OriginY + i);
					printf("■");
				}
			}
			std::cout << "\n";
		}
	}
}


void ImagePrint::Leaf1()
{
	int Leaf1[SMALL_SPRITE][SMALL_SPRITE] =
	{ {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0},
	{0,1,1,0,1,1,0,0,0,0,1,1,1,1,0,0},
	{0,0,1,0,0,1,1,0,0,0,1,0,0,1,1,0},
	{0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0},
	{0,0,1,0,0,0,1,1,0,0,0,0,0,0,1,0},
	{0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,0},
	{0,0,1,0,0,0,0,1,1,0,0,0,0,1,0,0},
	{0,1,1,0,0,0,0,0,1,1,1,1,1,1,0,0},
	{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,},
	{0,},
	{0,},
	{0,},
	{0,},
	{0,}
	};

	ConvertDotSmall(10, SMALL_SPRITE, Leaf1, LEAF_1_X, LEAF_1_Y, 2, 0);
}

void ImagePrint::Leaf2()
{
	int Leaf2[SMALL_SPRITE][SMALL_SPRITE] =
	{ {0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1},
	{1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0},
	{0,0,1,0,0,0,0,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,1,1,0,0,1,0,0,0,0,0},
	{0,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0},
	{0,},
	{0,},
	{0,},
	{0,},
	{0,}
	};

	ConvertDotSmall(11, SMALL_SPRITE, Leaf2, LEAF_2_X, LEAF_2_Y, 2, 0);
	ConvertDotSmall(11, SMALL_SPRITE, Leaf2, LEAF_2_X, LEAF_2_Y, 2, 0);
}

void ImagePrint::Leaf3()
{
	int Leaf3[SMALL_SPRITE][SMALL_SPRITE] =
	{ {1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,1,1,0,0,0},
	{0,0,0,1,1,0,0,0,0,0,1,1,1,1,1,0},
	{0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,1},
	{0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1},
	{0,0,0,0,0,1,0,0,0,1,1,1,0,0,0,1},
	{0,0,0,0,1,1,1,0,0,0,0,0,0,0,1,0},
	{0,0,0,0,1,1,1,1,0,0,0,0,0,0,1,0},
	{0,0,0,0,1,1,0,1,1,1,0,0,0,1,0,0},
	{0,0,0,0,1,1,0,0,0,0,1,1,1,0,0,0},
	{0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,1},
	{1,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1},
	{0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0}
	};

	ConvertDotSmall(SMALL_SPRITE, SMALL_SPRITE, Leaf3, LEAF_3_X, LEAF_3_Y, 2, 0);
}

void ImagePrint::Rose()
{
	int Rose1[EIGHT_SPRITE][EIGHT_SPRITE] =
	{{0,0,1,1,1,1,0,0},
	{0,1,0,1,1,0,1,0},
	{0,0,1,1,1,1,0,0},
	{0,0,1,0,0,1,0,0},
	{0,0,0,1,1,0,0,0},
	{0, },
	{0, },
	{0, },
	};

	ConvertDotMin(5, EIGHT_SPRITE, Rose1, ROSE_1_X, ROSE_1_Y, 6, 0);
	ConvertDotMin(5, EIGHT_SPRITE, Rose1, ROSE_2_X, ROSE_2_Y, 6, 0);
	ConvertDotMin(5, EIGHT_SPRITE, Rose1, ROSE_3_X, ROSE_3_Y, 6, 0);
	ConvertDotMin(5, EIGHT_SPRITE, Rose1, ROSE_4_X, ROSE_4_Y, 6, 0);
}

void ImagePrint::IntroBox()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y);
	printf("┌───────────────────────────────┐");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y+1);
	printf("│           New Story           │");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 2);
	printf("│                               │");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 3);
	printf("│             EXIT              │");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 4);
	printf("└───────────────────────────────┘");
}

void ImagePrint::SelectPlayBlink()
{
	PlaySound(NULL, 0, 0);
	music->PlaySelectSound();
	system("cls");

	int index = 0;
	while (index < 3)
	{
		to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 1);
		printf("            New Story           ");

		Sleep(200);
		system("cls");

		index++;

	}

	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 1);
	printf("            New Story           ");
}


void ImagePrint::IntroTitle()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y);
	printf(" __  __ ___ ___    _____ ____      _  _____ _____ _     _     ___  \n");
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 1);
	printf("|  \\/  |_ _/ _ \\  |  ___|  _ \\    / \\|_   _| ____| |   | |   / _ \\ \n");
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 2);
	printf("| |\\/| || | | | | | |_  | |_) |  / _ \\ | | |  _| | |   | |  | | | |\n");
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 3);
	printf("| |  | || | |_| | |  _| |  _ <  / ___ \\| | | |___| |___| |__| |_| |\n");
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 4);
	printf("|_|  |_|___\\___/  |_|   |_| \\_\\/_/   \\_\\_| |_____|_____|_____\\___/ \n");
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 5);
	printf("Mio Fratello, My Brother.");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 7);
	printf("===================================================================");
	to->GoToXYPosition(TITLE_POSITION_X, TITLE_POSITION_Y + 8);
	printf("Select and Press Space Bar");
}

void ImagePrint::IntroScene()
{
	music->PlayIntroMusic();
	IntroText();
	
}

void ImagePrint::IntroText()
{
	Sleep(500);

	char IntroText1[100] = "스티비? 이번 상원의원에 출마한 써니보이 보체티의......";
	char IntroText2[10] = "따까리?";
	char IntroText3[10] = "......";
	char IntroText4[100] = "캠프의 브래인 입니다만.";
	char IntroText5[100] = "그래.. 뭐, 브래인이든 따까리든. 치치에 대한 정보는 나도 없어.";
	char IntroText6[100] = "어찌됐든 그 녀석, 이미 죽었잖아?";
	char IntroText7[100] = "뭐.. 납득하기 싫으면 총질이라도 하던지, 캠프의 따까리씨.";

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText1, 80, sizeof(IntroText1) / sizeof(IntroText1[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y+2, IntroText2, 80, sizeof(IntroText2) / sizeof(IntroText2[0]));
	Sleep(1000);
	system("cls");

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText3, 80, sizeof(IntroText3) / sizeof(IntroText3[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y+2, IntroText4, 80, sizeof(IntroText4) / sizeof(IntroText4[0]));
	Sleep(1000);
	system("cls");

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText5, 80, sizeof(IntroText5) / sizeof(IntroText5[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y + 2, IntroText6, 80, sizeof(IntroText6) / sizeof(IntroText6[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y + 4, IntroText7, 80, sizeof(IntroText7) / sizeof(IntroText7[0]));
	Sleep(1000);

}

void ImagePrint::PrintText(int x, int y, char* text, int delay, int size)
{
	to->GoToXYPosition(x, y);

	int index = 0;
	int TextLen = size;
	while (index < TextLen)
	{
		if (text[index] == '\0')
		{
			break;
		}
		
		printf("%c", text[index]);
		Sleep(delay);

		index++;
	}
}

void ImagePrint::BattelSteveCharacter(int color)
{
	int Steve[SMALL_SPRITE][MIDIUM_SPRITE] =
	{ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, }
	};

	ConvertDotMidium(SMALL_SPRITE, MIDIUM_SPRITE, Steve, STEVE_X, STEVE_Y, color, 0);

}

void ImagePrint::BattelVillanCharacter(int color)
{
	int Villan[SMALL_SPRITE][MIDIUM_SPRITE] =
	{ {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
	{0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, }
	};

	ConvertDotMidium(SMALL_SPRITE, MIDIUM_SPRITE, Villan, VILLAN_X, VILLAN_Y, color, 0);
}

void ImagePrint::BattleTextBox()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y);
	printf("┌──────────────────────────────────────────────────────────────────────────────────────────┐");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 1);
	printf("│                                                                                          │");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 2);
	printf("│                                                                                          │");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 3);
	printf("│                                                                                          │");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 4);
	printf("│                                                                                          │");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 5);
	printf("│                                                                                          │");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 6);
	printf("└──────────────────────────────────────────────────────────────────────────────────────────┘");
}

void ImagePrint::BattleTextPrint()
{
	to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
	printf("공격                                           도망간다");
}

void ImagePrint::BattleRun(int WhoSay)
{
	to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
	printf("                                                       ");

	if (WhoSay == EWHOSE_TURN::STEVE)
	{
		to->GoToXYPosition(BATTLE_TEXT_X, BATTLE_TEXT_Y);
		printf("안돼! 보스를 실망시킬 순 없어!");
	}
	else if (WhoSay == EWHOSE_TURN::VILLAN)
	{
		to->GoToXYPosition(BATTLE_TEXT_X-6, BATTLE_TEXT_Y);
		printf("안돼! 고작 써니보이의 따까리한테 질 순 없지!");
	}
}

void ImagePrint::BattleAttack(int WhoSay)
{
	if (WhoSay == EWHOSE_TURN::STEVE)
	{
		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
		printf("                                                       ");

		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 17, BATTLE_TEXT_BOX_Y + 3);
		printf("치치의 총                                 루치아노의 나이프 ");

		handle->SetWhoseTurn(keyboard->BattleAttackSelect());

		if (handle->GetWhoseTurn() == ESTEVE_ATTACK::GUN)
		{
			steve->SetAttack(ESTEVE_ATTACK::GUN);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X, BATTLE_TEXT_Y);
			printf("스티비가 치치의 총으로 공격했다!");

			villan->SetHP(villan->GetHP() - 5);

		}
		else if (handle->GetWhoseTurn() == ESTEVE_ATTACK::KNIFE)
		{

			steve->SetAttack(ESTEVE_ATTACK::KNIFE);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X, BATTLE_TEXT_Y);
			printf("스티비가 루치아노의 칼로 공격했다!");

			villan->SetHP(villan->GetHP() - 3);
		}
	}
	else if (WhoSay == EWHOSE_TURN::VILLAN)
	{
		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
		printf("                                                       ");

		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 17, BATTLE_TEXT_BOX_Y + 3);
		printf("마피의 전설의 총                              중국산 나이프 ");

		handle->SetWhoseTurn(keyboard->BattleComAttackSelect());

		if (handle->GetWhoseTurn() == EVILLAN_ATTACK::V_GUN)
		{
			villan->SetAttack(EVILLAN_ATTACK::V_GUN);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X-2, BATTLE_TEXT_Y);
			printf("나쁜놈이 마피의 전설의 총으로 공격했다!");

			steve->SetHP(steve->GetHP() - 4);

		}
		else if (handle->GetWhoseTurn() == EVILLAN_ATTACK::V_KNIFE)
		{
			villan->SetAttack(EVILLAN_ATTACK::V_KNIFE);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X-2, BATTLE_TEXT_Y);
			printf("나쁜놈이 중국산 나이프로 공격했다!");

			steve->SetHP(steve->GetHP() - 1);
		}
	}
}

void ImagePrint::PrintHPBar(int CurrentHP, int x, int y)
{
	to->GoToXYPosition(x, y);
	printf("                                                            ");

	to->GoToXYPosition(x, y);

	for (int i = 0; i < CurrentHP; i++)
	{
		printf("■ ");
	}
}

void ImagePrint::BattleScene()
{
	music->PlayStartSceneMusic();

	while (1)
	{
		PrintHPBar(steve->GetHP(), STEVE_HP_BAR_X, STEVE_HP_BAR_Y);
		PrintHPBar(villan->GetHP(), VILLAN_HP_BAR_X, VILLAN_HP_BAR_Y);

		if (steve->GetHP() < 1)
		{
			SteveDefeat();

			break;
		}
		else if (villan->GetHP() < 1)
		{
			VillanDefeat();

			break;
		}

		if (handle->GetWhoseTurn() == EWHOSE_TURN::STEVE)
		{
			BattelSteveCharacter(15);
			BattelVillanCharacter(8);

			BattleTextBox();

			BattleTextPrint();
			int PlayerChoose = keyboard->BattleBoxSelect();
			if (PlayerChoose == EBATTLE_CHOOSE::RUN)
			{
				BattleRun(EWHOSE_TURN::STEVE);
				Sleep(2000);
			}
			else if (PlayerChoose == EBATTLE_CHOOSE::BATTLE)
			{
				BattleAttack(EWHOSE_TURN::STEVE);
				Sleep(2000);
			}

			handle->SetWhoseTurn(EWHOSE_TURN::VILLAN);
			continue;
		}
		else if (handle->GetWhoseTurn() == EWHOSE_TURN::VILLAN)
		{
			BattelSteveCharacter(8);
			BattelVillanCharacter(15);

			BattleTextBox();

			BattleTextPrint();
			int PlayerChoose = keyboard->BattleComBoxSelect();
			if (PlayerChoose == EBATTLE_CHOOSE::RUN)
			{
				BattleRun(EWHOSE_TURN::VILLAN);
				Sleep(2000);
			}
			else if (PlayerChoose == EBATTLE_CHOOSE::BATTLE)
			{
				BattleAttack(EWHOSE_TURN::VILLAN);
				Sleep(2000);
			}

			handle->SetWhoseTurn(EWHOSE_TURN::STEVE);
			continue;
		}

		keyboard->CleanInputBuffer();

	}
}

void ImagePrint::DisappearCharacter(int x, int y, int VSize)
{
	for (int i = 0; i < VSize; i++)
	{
		to->GoToXYPosition(x, y + i);
		printf("                                                            ");
		Sleep(100);
	}
}

void ImagePrint::VillanDefeat()
{
	music->StopPlayMusic();
	Sleep(1000);
	system("cls");
	BattelVillanCharacter(4);
	Sleep(1000);

	music->PlaySelectSound();
	DisappearCharacter(VILLAN_X, VILLAN_Y, SMALL_SPRITE);
	Sleep(2000);
	music->PlayEnding1Music();
	VillanDefeatText();

}

void ImagePrint::VillanDefeatText()
{
	char IntroText1[100] = "치치 보체티에 대한 정보를 내놔!";
	char IntroText2[100] = "그 말랑거리는 녀석은 이미 죽었잖아. 난 아무것도 몰라...";
	char IntroText3[100] = "그렇게 정 궁금하면... 자네 보스인...";
	char IntroText4[100] = "써니보이 보체티한테 물어보던지.";
	char IntroText5[100] = "... 뭐라고?";
	char IntroText6[100] = "권력에 눈이 멀어서 친아들인 치치를 죽이고...";
	char IntroText7[100] = "양아들인 써니보이가 그 자리를 차지했을지.. 누가알아?";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText1, 80, sizeof(IntroText1) / sizeof(IntroText1[0]));
	Sleep(1000);
	system("cls");

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText2, 80, sizeof(IntroText2) / sizeof(IntroText2[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y + 2, IntroText3, 80, sizeof(IntroText3) / sizeof(IntroText3[0]));
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText4, 110, sizeof(IntroText4) / sizeof(IntroText4[0]));
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText5, 80, sizeof(IntroText5) / sizeof(IntroText5[0]));
	Sleep(1000);
	system("cls");

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText6, 80, sizeof(IntroText6) / sizeof(IntroText6[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y + 2, IntroText7, 80, sizeof(IntroText7) / sizeof(IntroText7[0]));
	Sleep(1000);

	to->GoToXYPosition(INTRO_TEXT_X + 40, INTRO_TEXT_Y + 10);
	printf("Ending 1: 보스의 진실\n\n");
	Sleep(2000);
}

void ImagePrint::SteveDefeat()
{
	music->StopPlayMusic();
	Sleep(1000);
	system("cls");
	BattelSteveCharacter(4);
	Sleep(1000);
	music->PlaySelectSound();
	DisappearCharacter(STEVE_X, STEVE_Y, SMALL_SPRITE);
	Sleep(2000);
	music->PlayEnding2Music();
	SteveDefeatText();
}

void ImagePrint::SteveDefeatText()
{
	char IntroText1[100] = "보스...";
	char IntroText2[100] = "보스를 지켜주기로 그 사람과 약속했는데...";
	char IntroText3[100] = "보스... 사실 나 본 것 같아요...";
	char IntroText4[100] = "캠프의 입구에서...";
	char IntroText5[100] = "치치 보체티를...";
	char IntroText6[100] = "보스.. 아폴로니아 바로 가세요...";
	char IntroText7[100] = "그곳의 사람들이 절 대신 할 거에요...";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText1, 80, sizeof(IntroText1) / sizeof(IntroText1[0]));
	Sleep(1000);
	system("cls");

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText2, 80, sizeof(IntroText2) / sizeof(IntroText2[0]));
	Sleep(1000);
	system("cls");

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText3, 80, sizeof(IntroText3) / sizeof(IntroText3[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y + 2, IntroText4, 80, sizeof(IntroText4) / sizeof(IntroText4[0]));
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText5, 110, sizeof(IntroText5) / sizeof(IntroText5[0]));
	Sleep(1000);
	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y, IntroText6, 80, sizeof(IntroText6) / sizeof(IntroText6[0]));
	Sleep(500);

	PrintText(INTRO_TEXT_X, INTRO_TEXT_Y + 2, IntroText7, 80, sizeof(IntroText7) / sizeof(IntroText7[0]));
	Sleep(1000);

	to->GoToXYPosition(INTRO_TEXT_X + 40, INTRO_TEXT_Y + 10);
	printf("Ending 2: 치치를 봤어\n\n");
	Sleep(2000);
}
