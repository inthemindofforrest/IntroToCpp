#pragma once
class Televisions
{
private:
	int currentChannel;
	int currentVolume;

public:
	void increaseVolume();    // increases the volume by one
	void decreaseVolume();    // decreases the volume by one

	int volume();             // returns the current volume

	void increaseChannel();   // increases the channel num by one
	void decreaseChannel();   // decreases the channel num by one

	int channel();            // returns the current channel
};