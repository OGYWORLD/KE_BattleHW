#include "Music.h"

Music::Music()
{
}

Music::~Music()
{
}

void Music::PlayStartSceneMusic()
{
	PlaySound(TEXT("Mia Famiglia.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void Music::PlayIntroMusic()
{
	PlaySound(TEXT("I wrote book.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void Music::PlayEnding1Music()
{
	PlaySound(TEXT("Family Shootgun Music.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void Music::PlayEnding2Music()
{
	PlaySound(TEXT("Love.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void Music::PlaySelectSound()
{
	PlaySound(TEXT("Select.wav"), NULL, SND_ASYNC);
}

void Music::PlayTextSound()
{
	PlaySound(TEXT("TextSound.wav"), NULL, SND_ASYNC);
}

void Music::StopPlayMusic()
{
	PlaySound(NULL, 0, 0);
}
