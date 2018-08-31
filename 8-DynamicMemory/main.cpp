#include "Header.h"

/*
int * Name = new int[size] //Correct way to allocate space for an array
*/


int main()
{
	int ArraySize = 10;

	int * Holder = zeroArray(ArraySize);
	int * Duplicated = duplicateArray(Holder, ArraySize);

	srand(time(NULL));

	//PrintInt(Holder, ArraySize);
	//PrintInt(Duplicated, ArraySize);

	//PlayerChooseNumbers();

	CHARACTER * newCharacter = NewCharacter(10);
	DisplayCharacter(newCharacter, 10);


	system("PAUSE");
	
	delete[] newCharacter;
	delete[] Holder;
	delete[] Duplicated;
	return 0;
}