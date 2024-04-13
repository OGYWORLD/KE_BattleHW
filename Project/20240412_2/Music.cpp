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

void Music::PlaySelectSound()
{
	PlaySound(TEXT("Select.wav"), NULL, SND_ASYNC);
}

void Music::PlayTextSound()
{
	PlaySound(TEXT("TextSound.wav"), NULL, SND_ASYNC);
}
