#include "Header.h"


void Greeting()
{
char Name[100];
char UserInput[4];
bool OkToGo = false;

while (!OkToGo)
{
	system("CLS");
	cout << "What is your name?" << endl;
	cin.getline(Name, 100);
	cout << "Is " << Name << " correct? yes or no" << endl;
	cin.getline(UserInput, 10);
	if (strcmp(UserInput, "yes") == 0)
	{
		cout << "Alright " << Name << endl;
		system("PAUSE");
		OkToGo = true;
	}
	else
	{
		continue;
	}
	
}
}
void FavoriteColor()
{
	char Color[100];

	cout << "What is your favorite Color?" << endl;
	cin.getline(Color, 100);
	tolower(Color[100]);

	if (strcmp(Color, "red") == 0)
		cout << "You are stupid" << endl;
	else if (strcmp(Color, "blue") == 0)
		cout << "You are the best" << endl;
	else
		cout << "You are really stupid!!!" << endl;

	system("PAUSE");
}
void MyToUpper(char * String)
{
	for (int i = 0; i < strlen(String); i++)
	{
		if (String[i] >= 97)
			String[i] -= (97 - 65);//Lowercase Decimal minus Uppercase Decimal
		if (String[i] == '\0')
			return;
	}
}
void RemoveSpaces()
{
	char UserInput[100];
	char EditedUserInput[100];

	cout << "What is your phrase?" << endl;
	cin.getline(UserInput, strlen(UserInput));

	int secondIndex = 0;

	for (int i = 0; i < strlen(UserInput) + 1; i++)
	{
		if (UserInput[i] != 32)
		{
			EditedUserInput[secondIndex] = UserInput[i];
			secondIndex++;
		}

	}


	cout << "NO! it is " << EditedUserInput << endl;

	system("PAUSE");
}
void Substring(int start, int end, char * String)
{
	char * newString = new char[(end - start) + 2]();

	for (int i = start; i < end + 1; i++)
	{
		newString[i] = String[i];
	}
	cout << newString << endl;
	system("PAUSE");
}
bool PalindromeTest(char * String)
{
	char * newString = new char[strlen(String)]();
	newString = String;
	MyToUpper(newString);

	int j = strlen(newString) - 1;

	for (int i = 0; i < strlen(String); i++)
	{
		if (newString[i] != newString[j])
		{
			return false;
		}
			
		j--;
	}
	return true;
}
int StringLength(char * String)
{
	int i;
	for (i = 0; String[i] != '\0'; i++);
	return i;
}
void ReverseString(char * String)
{

	int j = (strlen(String) - 1);
	char TempHolder;
	for (int i = 0; i < strlen(String) / 2; i++)
	{
		TempHolder = String[j];
		String[j] = String[i];
		String[i] = TempHolder;

		j--;
	}
}
void StringTrimming(char * String)
{
	char * newString = new char[strlen(String)]();

	int NewStringCounter = 0;

	int EndCounter = strlen(String) + 1;
	int StartCounter = -1;
	int Start = -1;
	int End = -1;

	while (Start == -1)
	{
		StartCounter++;
		if (String[StartCounter] != 32)
			Start = StartCounter;
	}
	while (End == -1)
	{
		EndCounter--;
		if (String[EndCounter] != 32)
			End = EndCounter;
	}
	for (int i = Start; i < End; i++)
	{
		newString[NewStringCounter] = String[i];
		NewStringCounter++;
	}

	for (int i = 0; i <= strlen(String); i++)
	{
		if (i != strlen(String))
			String[i] = newString[i];
		else
			String[i] = '\0';
	}


}
void ShiftCipher(char * Password, int ShiftAmount, bool Decode)
{
	for (int i = 0; i < strlen(Password); i++)
	{
		if (Decode)
		{
			for (int j = 0; j < ShiftAmount; j++)
			{
				if (Password[i] != 32)
				{
					Password[i] ++;
					if (Password[i] > 90 && Password[i] < 97)
						Password[i] = 97;
					else if (Password[i] > 122)
						Password[i] = 65;
				}
			}
			
		}
		if (!Decode)
		{
			for (int j = 0; j < ShiftAmount; j++)
			{
				
				if (Password[i] != 32)
				{
					Password[i] --;
					if (Password[i] < 65)
						Password[i] = 97;
					else if (Password[i] < 97 && Password[i] > 90)
						Password[i] = 65;
				}
			}

		}
	}
}