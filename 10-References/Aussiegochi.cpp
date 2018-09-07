#include "AussiegochiHeader.h"


void feedAussie(Aussiegochi& aus)
{
	aus.hunger++;
	aus.happiness++;
}
void waterAussie(Aussiegochi& aus)
{
	aus.thirst++;
	aus.sanity--;
}
void abuseAussie(Aussiegochi& aus)
{
	aus.sanity -= 10;
}
void coddleAussie(Aussiegochi& aus)
{
	aus.happiness += 10;
	aus.sanity -= 10;
}

void PrintAusStats(Aussiegochi& aus)
{
	cout << endl;
	cout << "\t\t\t\tI am Aussiegochi..." << endl;
	cout << endl;
	cout << endl;
	cout << " Happiness: " << aus.happiness << endl;
	cout << "   Hunger:  " << aus.hunger << endl;
	cout << "   Thirst:  " << aus.thirst << endl;
	cout << "   Sanity:  " << aus.sanity << endl;
	cout << endl;
}

