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
	for (int i = (start / 5); i < (end / 5); i++)
	{
		
		cout << (5 * i) << endl;
	}
	system("PAUSE");
}