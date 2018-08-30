#include "Header.h"

void MultipleChoice()
{
	int CorrectAnswers = 0;
	char userInput;

	cout << "What is the capital of Washington?" << endl;
	cout << "1) Bellevue" << endl;
	cout << "2) Olympia" << endl;
	cout << "3) Seattle" << endl;
	cout << "4) Yakima" << endl;

	cin >> userInput;
	if (userInput == '2')
		CorrectAnswers++;

	cout << "Which of the following nations has the largest population as of 2018?" << endl;
	cout << "1) North Korea" << endl;
	cout << "2) Luxemourg" << endl;
	cout << "3) Denmark" << endl;
	cout << "4) Syria" << endl;

	cin >> userInput;
	if (userInput == '1')
		CorrectAnswers++;

	cout << "Which of the following locations does not have an AIE campus?" << endl;
	cout << "1) Canberra, Australia" << endl;
	cout << "2) Lafayette, Louisana" << endl;
	cout << "3) Brisbane, Austrilia" << endl;
	cout << "4) Adelaide, Australia" << endl;

	cin >> userInput;
	if (userInput == '3')
		CorrectAnswers++;

	system("CLS");
	cout << "You answered: " << CorrectAnswers << "/3 questions right." << endl;
	system("PAUSE");

}
void PrintMultiplesOfFive(int start, int end)
{
	system("CLS");
	for (int i = (start / 5); i <= (end / 5); i++)
	{

		cout << (5 * i) << endl;
	}
	system("PAUSE");
}
void BirthdayCakeCandles(int arr[], int size)
{
	int LastCandle = 0;
	int TotalBlown = 0;
	int LitCandles = 0;

	for(int i = 0; i < size; i++)
		if (arr[i] > LastCandle)
		{
			LastCandle = arr[i];
			TotalBlown++;
		}
		else
		{
			LitCandles++;
		}
	cout << "Number of blown candles: " << TotalBlown << endl;
	cout << "Number of lit candles: " << LitCandles << endl;

	system("PAUSE");
}
void ArrayRotation(int arr[], int size, int rotation)
{
	
	int SecondHolder = 0;//Even more Temparary holder before moving to Holder
	int Holder;//Temparary holder for numbers

	//Number of times the numbers will rotate
	for (int Rotate = 1; Rotate <= rotation; Rotate++)
	{
		Holder = arr[0];//Reset Holder to the first number in the array
		

		//Rotating each number individually
		for (int i = 1; i < size; i++)
		{
			SecondHolder = arr[i];
			arr[i] = Holder;
			Holder = SecondHolder;
			
		}
		arr[0] = Holder;
		
	}



	for (int i = 0; i < 9; i++)
		cout << arr[i] << endl;
	system("PAUSE");
}
int HighScore(Score score[], int size, int start)
{
	int Highest = 0;

	for (int i = start; i < (size - start); i++)
	{
		//If the score is higher than the Highest, Replace the Highest
		if (score[i].HighScore > score[Highest].HighScore)
			Highest = i;
	}
	return Highest;
}
float AverageOfTimes(Score score[], int size)
{
	float averageOfTimes = 0;

	for (int i = 0; i < size; i++)
	{
		averageOfTimes += score[i].TimeToComplete;
	}
	return(averageOfTimes / size);
}
void SortScores(Score score[], Score sortedScores[], int size)
{
	for (int i = 0; i < size; i++)
		sortedScores[i] = score[HighScore(score, size, i)];
}
int DifferenceInScores(Score score[], int N)
{
	return abs(score[0].HighScore - score[N].HighScore);
}
