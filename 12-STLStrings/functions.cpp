#include "Header.h"

void PrintEveryOther(string String)
{
	string Temp (String.length(), ' ');
	int j = 0;
	for (int i = 1; i < String.length(); i+=2)
	{
		Temp[j] = String[i];
		j++;
	}

	cout << Temp << endl;
}
void BestowingATitle(string String)
{
	cout << "What is your name?" << endl;
	getline(cin, String);

	String.append(", the Great!!!");

	cout << String << endl;
}
void MyToUpper(string String)
{
	for (int i = 0; i < String.length(); i++)
	{
		toupper(String[i]);
	}
}
int CharacterFrequency(string String, char Letter)
{
	int occurrences = 0;

	for (int i = String.find(Letter, 0); i != string::npos; i = String.find(Letter, i))
	{
		occurrences++;
		i++;
	}
	return occurrences;
}
int PhraseFrequency(string String, string Phrase)
{
	int occurrences = 0;
	for (int i = String.find(Phrase, 0); i != string::npos; i = String.find(Phrase, i))
	{
		occurrences++;
		i++;
	}
	return occurrences;
}

void ChosenWord(string Word)
{
	string ListOfWords[3];
	ListOfWords[0] = "Word";
	ListOfWords[1] = "Wordy";
	ListOfWords[2] = "Wordest";


	Word = ListOfWords[2];
}
void DrawBoard(string Letters, string String)
{
	for (int i = 0; i < Letters.length(); i++)
	{
		
		cout << Letters[i] << " ";
		if (i == Letters.length() - 1)
			cout << endl;
	}
}
bool CheckAnswer(string Letters, string Word)
{
	int checks = 0;
	for (int i = 0; i < Word.length(); i++)
	{
		if (Letters[i] == Word[i])
			checks++;
	}
	if (checks == Word.length())
		return true;
	else
		return false;
}

void Hangman()
{
	string Word = "words";
	switch (rand() % 5)
	{
	case 1:
		Word = "Word";
		break;
	case 2:
		Word = "Wordy";
		break;
	case 3:
		Word = "Wordiest";
		break;
	case 4:
		Word = "Wordiust";
		break;
	case 5:
		Word = "Wordioustest";
		break;
	default:
		break;
	}
	int Attempts = 10;
	char Guess = ' ';

	string Letters (Word.length(), '_');
	while (Attempts > 0)
	{
		system("CLS");
		DrawBoard(Letters, Word);

		cout << "You have " << Attempts << " attempts left." << endl;
		cout << "Your Guess: ";
		cin >> Guess;



		for (int i = Word.find(Guess, 0); i != string::npos; i = Word.find(Guess, i))
		{
			Letters[i] = Word[i];
			i++;
		}

		if (CheckAnswer(Letters, Word))
		{
			system("CLS");
			cout << "You Win" << endl;
			system("PAUSE");
			return;
		}
		

		system("PAUSE");
		
	}
	if (Attempts <= 0)
	{
		system("CLS");
		cout << "You Lose" << endl;
		system("PAUSE");
		return;
	}

}