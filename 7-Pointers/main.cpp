#include "Header.h"

int main()
{
	/*float Array[3] = { 0,1,2 };
	int Array2[3] = { 1,2,3 };
	bool Array3[5];

	int Array4[10] = { 4,5,2,6,5,3,5,6,2,5 };
	int secondArray[5];*/

	int Word1 = 1;
	int Phrase1 = 2;

	int * Word = &Word1;
	int * Phrase = &Phrase1;


	//char * Letter = nullptr;

	//printFloats(Array, 3);
	//arraySum(Array2, 3);
	//initBools(Array3, 5, false);
	/*TransferArray(Array4, secondArray, 0, 4, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << *(secondArray + i) << endl;
	}*/
	/*Letter = LetterSearch(Word, 'n');
	cout << &Letter << endl;
	cout << *(Letter) << endl;*/

	SwappingPointers(Word, Phrase);
	cout << *(Word) << endl;



	system("PAUSE");
}