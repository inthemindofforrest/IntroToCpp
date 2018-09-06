#include "Televisions.h"


void Televisions::increaseVolume()
{
	currentVolume++;
}
void Televisions::decreaseVolume()
{
	currentVolume--;
}

int Televisions::volume()
{
	return currentVolume;
}

void Televisions::increaseChannel()
{
	currentChannel++;
}
void Televisions::decreaseChannel()
{
	currentChannel--;
}

int Televisions::channel()
{
	return currentChannel;
}
