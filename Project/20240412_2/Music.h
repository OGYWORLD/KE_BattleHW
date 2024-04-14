#pragma once
#pragma comment(lib, "winmm.lib")

#include <Windows.h>
#include <mmsystem.h>

class Music
{
private:

public:
	Music();
	~Music();

	void PlayStartSceneMusic(); // Mia Familglia
	void PlayIntroMusic(); // I wrote book
	void PlayEnding1Music(); // Family Shootgun Music
	void PlayEnding2Music(); // Love

	void PlaySelectSound();
	void PlayTextSound();

	void StopPlayMusic();
};

