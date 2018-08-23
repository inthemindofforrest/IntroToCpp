#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::rand;


void PrintArray(int arr[], int Size)
{
	for (int i = 0; i < Size; i++)
		cout << arr[i] <<  ", ";
	cout << endl;
}

int SumOfArray(int arr[], int Size)
{
	int Total = 0;


	for (int i = 0; i < Size; i++)
		Total += arr[i];

	return Total;
}

int SmallestElement(int arr[], int Size)
{
	int Smallest = 0;

	for (int i = 0; i < Size; i++)
		if (arr[i] < Smallest)
			Smallest = arr[i];

	return Smallest;
}

int LargestElement(int arr[], int Size)
{
	int Largest = 0;

	for (int i = 0; i < Size; i++)
		if (arr[i] > Largest)
			Largest = arr[i];

	return Largest;
}

int FindAValue(int arr[], int Size, int Search)
{
	//Seach the array, if found return the index
	for (int i = 0; i < Size; i++)
		if (arr[i] == Search)
			return i;


	//If not found, return -1
	return -1;
}

int CountElement(int arr[], int Size, int Search)
{
	int Total = 0;

	//Seach the array, if found add to total
	for (int i = 0; i < Size; i++)
		if (arr[i] == Search)
			Total++;


	//If not found, return -1
	if (Total == 0)
		return -1;
	else
		return Total;
}

int ElementUniqueness(int arr[], int Size, int Search)
{
	//If element Occurs more than once return -1
	if (CountElement(arr, Size, Search) != 1)
	{
		//cout << "No" << endl;
		return -1;
	}
	//Else return 0
	//cout << "Yes" << endl;
	return 0;
}

int ArrayUniqueness(int arr[], int Size)
{
	int TempNumber;

	//Set Temp number to each element in the array
	for (int i = 0; i < Size; i++)
	{
		TempNumber = arr[i];
		//Checking every number in the array with the TempNumber
		for (int j = 0; j < Size; j++)
		{
			//If the numbers are a duplicate, Tell the user and report -1
			if (i != j && TempNumber == arr[j])
			{
				cout << TempNumber << " make this array not unique!" << endl;
				return -1;
			}
		}
	}

	//If no duplicates, return 0
	return 0;
}

void Reverse(int arr[], int Size)
{
	for (int i = 0; i < Size / 2; i++)
	{
		int TempHolder = arr[i];
			arr[i] = arr[(Size - 1) - i];
			arr[(Size - 1) - i] = TempHolder;
	}
}

void SortingAscending(int arr[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		int TempBiggest = arr[i];
		for (int j = 0; j < Size; j++)
		{
			if (arr[j] > TempBiggest)
			{
				int TempHolder = arr[i];
				arr[i] = arr[j];
				arr[j] = TempHolder;
			} 
		}
	}
}

void SortingDesending(int arr[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		int TempSmallest = arr[i];
		for (int j = 0; j < Size; j++)
		{
			if (arr[j] < TempSmallest)
			{
				int TempHolder = arr[i];
				arr[i] = arr[j];
				arr[j] = TempHolder;
			}
		}
	}
}

void InsertionSort(int arr[], int Size)
{
	int tempHolder;

	for (int i = 0; i < Size; i++)
	{
		tempHolder = arr[i];
		PrintArray(arr, Size);
		for (int j = (i - 1); j > 0; j--) 
		{
			
			if (arr[j] > arr[i])
			{
				arr[i] = arr[j];
				arr[j] = tempHolder;
			}
		}
	}
}

int main()
{
	int MyArray[10] = { 1, 2, 3, 4, 5, 6, 7, 7, 4, 9 };

	SortingDesending(MyArray, sizeof(MyArray) / sizeof(int));
	PrintArray(MyArray, sizeof(MyArray)/ sizeof(int));
	//cout << SumOfArray(MyArray, sizeof(MyArray) / sizeof(int)) << endl;
	//cout << SmallestElement(MyArray, sizeof(MyArray) / sizeof(int)) << endl;
	//cout << LargestElement(MyArray, sizeof(MyArray) / sizeof(int)) << endl;
	//cout << FindAValue(MyArray, sizeof(MyArray) / sizeof(int), 6) << endl;
	//cout << CountElement(MyArray, sizeof(MyArray) / sizeof(int), 2) << endl;
	//ElementUniqueness(MyArray, sizeof(MyArray) / sizeof(int), 4);
	//cout << ArrayUniqueness(MyArray, sizeof(MyArray) / sizeof(int)) << endl;
	InsertionSort(MyArray, sizeof(MyArray) / sizeof(int));
	PrintArray(MyArray, sizeof(MyArray) / sizeof(int));


	system("PAUSE");
	return 0;
}