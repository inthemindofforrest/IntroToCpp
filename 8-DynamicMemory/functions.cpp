#include "Header.h"


int * zeroArray(int size)
{
	int * arr = new int[size] {0};
	return arr;
}
int * duplicateArray(int * OriginalArray, int size)
{
	int * Duplicate = new int[size];
	for (int i = 0; i < size; i++)
		*(Duplicate + i) = *(OriginalArray + i);
	return Duplicate;
}

void PrintInt(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i);

		if (i < size - 1)
		{
			cout << ", ";
		}
		else
		{
			cout << "." << endl;
		}
	}
}


void PlayerChooseNumbers()
{
	int UserInput = 0;
	int size = 0;

	cout << "Howdy! How many numbers do you have?" << endl;
	cin >> size;

	int * PlayersOptions = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Okay, whats number "<< i + 1 << "?" << endl;
		cin >> UserInput;

		*(PlayersOptions + i) = UserInput;
	}
	
	cout << "Okay, you have the numbers: ";

	for (int j = 0; j < size; j++)
	{
		if (j < size - 1)
		{
			cout << *(PlayersOptions + j) << ", ";
		}
		else
		{
			cout << *(PlayersOptions + j) << "." << endl;
		}
	}

	delete[] PlayersOptions;
}

CHARACTER * NewCharacter(int size)
{
	CHARACTER * newCharacter = new CHARACTER[size]{ {0,0,0} };
	
	for (int i = 0; i < size; i++)
	{
		newCharacter[i].Attack = rand() % 100;
		newCharacter[i].Defense = rand() % 100;
		newCharacter[i].Experience = rand() % 100;
		
	}

	return newCharacter;
}


void DisplayCharacter(CHARACTER * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Character #" << i + 1 << endl;
		cout << "ATK: " << arr[i].Attack << endl;
		cout << "DEF: " << arr[i].Defense << endl;
		cout << "EXP: " << arr[i].Experience << endl;
		cout << endl;
	}
}
//void AddItem(CHARACTER * character, int newID, int newGold)
//{
//	INVENTORY * inv = new INVENTORY[(sizeof(character.Inventory) / sizeof(INVENTORY)) + sizeof(INVENTORY)];
//	
//	for (int i = 0; i <= (sizeof(*(character).Inventory) / sizeof(INVENTORY)); i++)
//	{
//		inv[i].ID = *(character).Inventory[i].ID;
//		inv[i].Gold = *(character).Inventory[i].Gold;
//	}
//	inv[(sizeof(*(character).Inventory) / sizeof(INVENTORY)) + sizeof(INVENTORY)].ID = newID;
//	inv[(sizeof(*(character).Inventory) / sizeof(INVENTORY)) + sizeof(INVENTORY)].Gold = newGold;
//	
//	delete[] character;
//}