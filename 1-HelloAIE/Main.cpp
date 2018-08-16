#include<iostream>

int main()
{
	int i = 0;//loop variable
	int LengthOfTracks = 3;//Number of tracks in array
	const char* MyArray[3] = {"Favorite Track #1","Favorite Track #2","Favorite Track #3"};// array of my Favorite Tracks

	std::cout << "Hello AIE" << std::endl;

	//Favorite Tracks
	for(i = 0; i < LengthOfTracks; i++)
		std::cout << MyArray[i] << std::endl;

	//Print numbers from 0-5
	for(i = 0; i <= (5); i++)
		std::cout << (i)  << std::endl;

	//Print numbers from 5-0
	for (i = 5; i >= 0; i--)
		std::cout << (i) << std::endl;

	system("Pause");
	return 0;
}