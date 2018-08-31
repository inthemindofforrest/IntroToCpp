#include "Header.h"

/*
(*(arr + i)) Moves through Arrays
((*arr) + i) Adds i to the number returned from (*arr)
(arr) is the memory of the first element in the array, or of the variable
(*arr) retrieves the value in arr, or arr if it is a variable
*/



void printFloats(float * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i);

		if (i < (size - 1))
		{
			cout << ", ";
		}
		else
		{
			cout << "." << endl;
		}
	}
}
void arraySum(int * arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *(arr + i);
	cout << "Total of array: " << sum << endl;
}
void initBools(bool * arr, int size, bool defaultValue)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = defaultValue;
	}
}
void TransferArray(int * arr, int * SecondArr, int start, int end, int SizeOfSecond)
{
	if (end > SizeOfSecond)
		end = SizeOfSecond - 1;
	for (int i = start; i <= end; i++)
	{
		
			*(SecondArr + i) = *(arr + i);
	}
}


char * LetterSearch(char * Word, char Search)
{
	char * Letter = nullptr;
	for(int i = 0; *(Word + i) != '\0'; i++)
	{
		if (*(Word + i) == Search)
		{
			Letter = (Word + i);
			cout << "Your letter is in the " << i + 1 << " position" << endl;
			return Letter;
		}
		
	}
	return nullptr;
}
void SwappingPointers(int *& Number1, int *& Number2)
{
	int * Holder = Number1;
	Number1 = Number2;
	Number2 = Holder;
}