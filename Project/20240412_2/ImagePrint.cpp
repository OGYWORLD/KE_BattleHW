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
					printf("��");
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
					printf("��");
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
					printf("��");
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
					printf("��");
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
					printf("��");
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
					printf("��");
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
	printf("������������������������������������������������������������������");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y+1);
	printf("��           New Story           ��");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 2);
	printf("��                               ��");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 3);
	printf("��             EXIT              ��");
	to->GoToXYPosition(INTRO_BOX_POSITION_X, INTRO_BOX_POSITION_Y + 4);
	printf("������������������������������������������������������������������");
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

	char IntroText1[100] = "��Ƽ��? �̹� ����ǿ��� �⸶�� ��Ϻ��� ��üƼ��......";
	char IntroText2[10] = "���?";
	char IntroText3[10] = "......";
	char IntroText4[100] = "ķ���� �귡�� �Դϴٸ�.";
	char IntroText5[100] = "�׷�.. ��, �귡���̵� �����. ġġ�� ���� ������ ���� ����.";
	char IntroText6[100] = "����Ƶ� �� �༮, �̹� �׾��ݾ�?";
	char IntroText7[100] = "��.. �����ϱ� ������ �����̶� �ϴ���, ķ���� �����.";

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
	printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 1);
	printf("��                                                                                          ��");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 2);
	printf("��                                                                                          ��");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 3);
	printf("��                                                                                          ��");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 4);
	printf("��                                                                                          ��");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 5);
	printf("��                                                                                          ��");
	to->GoToXYPosition(BATTLE_TEXT_BOX_X, BATTLE_TEXT_BOX_Y + 6);
	printf("����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������");
}

void ImagePrint::BattleTextPrint()
{
	to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
	printf("����                                           ��������");
}

void ImagePrint::BattleRun(int WhoSay)
{
	to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
	printf("                                                       ");

	if (WhoSay == EWHOSE_TURN::STEVE)
	{
		to->GoToXYPosition(BATTLE_TEXT_X, BATTLE_TEXT_Y);
		printf("�ȵ�! ������ �Ǹ���ų �� ����!");
	}
	else if (WhoSay == EWHOSE_TURN::VILLAN)
	{
		to->GoToXYPosition(BATTLE_TEXT_X-6, BATTLE_TEXT_Y);
		printf("�ȵ�! ���� ��Ϻ����� ������� �� �� ����!");
	}
}

void ImagePrint::BattleAttack(int WhoSay)
{
	if (WhoSay == EWHOSE_TURN::STEVE)
	{
		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
		printf("                                                       ");

		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 17, BATTLE_TEXT_BOX_Y + 3);
		printf("ġġ�� ��                                 ��ġ�Ƴ��� ������ ");

		handle->SetWhoseTurn(keyboard->BattleAttackSelect());

		if (handle->GetWhoseTurn() == ESTEVE_ATTACK::GUN)
		{
			steve->SetAttack(ESTEVE_ATTACK::GUN);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X, BATTLE_TEXT_Y);
			printf("��Ƽ�� ġġ�� ������ �����ߴ�!");

			villan->SetHP(villan->GetHP() - 5);

		}
		else if (handle->GetWhoseTurn() == ESTEVE_ATTACK::KNIFE)
		{

			steve->SetAttack(ESTEVE_ATTACK::KNIFE);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X, BATTLE_TEXT_Y);
			printf("��Ƽ�� ��ġ�Ƴ��� Į�� �����ߴ�!");

			villan->SetHP(villan->GetHP() - 3);
		}
	}
	else if (WhoSay == EWHOSE_TURN::VILLAN)
	{
		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
		printf("                                                       ");

		to->GoToXYPosition(BATTLE_TEXT_BOX_X + 17, BATTLE_TEXT_BOX_Y + 3);
		printf("������ ������ ��                              �߱��� ������ ");

		handle->SetWhoseTurn(keyboard->BattleComAttackSelect());

		if (handle->GetWhoseTurn() == EVILLAN_ATTACK::V_GUN)
		{
			villan->SetAttack(EVILLAN_ATTACK::V_GUN);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X-2, BATTLE_TEXT_Y);
			printf("���۳��� ������ ������ ������ �����ߴ�!");

			steve->SetHP(steve->GetHP() - 4);

		}
		else if (handle->GetWhoseTurn() == EVILLAN_ATTACK::V_KNIFE)
		{
			villan->SetAttack(EVILLAN_ATTACK::V_KNIFE);

			to->GoToXYPosition(BATTLE_TEXT_BOX_X + 18, BATTLE_TEXT_BOX_Y + 3);
			printf("                                                            ");

			to->GoToXYPosition(BATTLE_TEXT_X-2, BATTLE_TEXT_Y);
			printf("���۳��� �߱��� �������� �����ߴ�!");

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
		printf("�� ");
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
	char IntroText1[100] = "ġġ ��üƼ�� ���� ������ ����!";
	char IntroText2[100] = "�� �����Ÿ��� �༮�� �̹� �׾��ݾ�. �� �ƹ��͵� ����...";
	char IntroText3[100] = "�׷��� �� �ñ��ϸ�... �ڳ� ������...";
	char IntroText4[100] = "��Ϻ��� ��üƼ���� �������.";
	char IntroText5[100] = "... �����?";
	char IntroText6[100] = "�Ƿ¿� ���� �־ ģ�Ƶ��� ġġ�� ���̰�...";
	char IntroText7[100] = "��Ƶ��� ��Ϻ��̰� �� �ڸ��� ����������.. �����˾�?";

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
	printf("Ending 1: ������ ����\n\n");
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
	char IntroText1[100] = "����...";
	char IntroText2[100] = "������ �����ֱ�� �� ����� ����ߴµ�...";
	char IntroText3[100] = "����... ��� �� �� �� ���ƿ�...";
	char IntroText4[100] = "ķ���� �Ա�����...";
	char IntroText5[100] = "ġġ ��üƼ��...";
	char IntroText6[100] = "����.. �����δϾ� �ٷ� ������...";
	char IntroText7[100] = "�װ��� ������� �� ��� �� �ſ���...";

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
	printf("Ending 2: ġġ�� �þ�\n\n");
	Sleep(2000);
}
