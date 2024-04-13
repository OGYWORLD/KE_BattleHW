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

	void PlayStartSceneMusic();

	void PlaySelectSound();

	void PlayTextSound();
};

