#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::rand;


int main()
{

	//Evaluate the table
	{
		// 1) True
		// 2) True
		// 3) True
		// 4) False
		// 5) False
		// 6) True
		// 7) True
	}

	//Evaluate the table
	{
		// Problem A-> 'A) 30'
		// Problem B-> 'B) 15'
	}

	//Number Judging
	{
		int userInput = 0;

		system("CLS");
		cout << "Number Judging\n\n";

		
		while (userInput < 1 || userInput > 100)
		{
			system("CLS");
			cout << "Choose a number between 1 and 100: ";
			cin >> userInput;
		}

		if (userInput > 50)
			cout << "Wow! " << userInput << " is such a big number!\n";
		else if (userInput < 50)
			cout << "Ewwww! " << userInput << " is such a small number!\n";
		else
			cout << "50 is a perfect number\n";
		system("PAUSE");
	}

	//Age Gate
	{
		int userInput = 0;

		system("CLS");
		cout << "Age Gate\n\n";

		
		cout << "How old are you? ";
		cin >> userInput;

		if (userInput < 18)
			cout << "You are a minor\n";
		else if (userInput >= 18)
		{
			cout << "You are an adult\n";
			if (userInput > 50)
				cout << "You are eligible to join AARP\n";
			if (userInput > 64)
				cout << "You are eligible for retirement benefits\n";
		}
		system("PAUSE");
	}

	//The smallest of three numbers
	{
		int userInput = 0;
		int SmallerNumber = 0;

		system("CLS");
		cout << "Smallest of 3 numbers\n\n";

		
		cout << "Choose your first number: ";
		cin >> SmallerNumber;

		cout << "Choose your second number: ";
		cin >> userInput;

		if (userInput < SmallerNumber)
			SmallerNumber = userInput;

		cout << "Choose your third number: ";
		cin >> userInput;

		if (userInput < SmallerNumber)
			SmallerNumber = userInput;

		cout << SmallerNumber << " is the smallest of the three\n";
		system("PAUSE");
	}

	//Even or Odd
	{
		int userInput = 0;

		system("CLS");
		cout << "Even or Odd\n\n";

		
		cout << "Choose a number: ";
		cin >> userInput;

		if (userInput % 2 == 0)
			cout << userInput << " is even. \n";
		else
			cout << userInput << " is odd. \n";
		system("Pause");
	}

	//Clamp the number
	{
		int userInput = 0;

		system("CLS");
		cout << "Clamp Number\n\n";

		
		cout << "Choose a number between 15 and 30: ";
		cin >> userInput;

		if (userInput < 15)
			userInput = 15;
		else if (userInput > 30)
			userInput = 30;
		cout << "Your number is " << userInput << endl;

		system("PAUSE");
	}

	//Coding word problems

		//#1
	{
		int userInput = 0;
		int CookieOrders = 0;

		system("CLS");
		cout << "Story Problem #1\n\n";

		
		cout << "How many cookies do you want to order (orders of 23 or more): ";
		cin >> userInput;

		CookieOrders = userInput / 23;

		if (CookieOrders == 0)
			cout << "You need more cookies to fill your tummy! 23 or more.";
		else
			cout << "You ordered " << CookieOrders << " cookies. That is " << (CookieOrders * 23) << "Cookies in total.\n";

		system("PAUSE");
	}
	//#2
	{
		int userInput = 0;
		int Sketchbooks = 0;

		system("CLS");
		cout << "Story Problem #2\n\n";

		
		cout << "How many sketchbook (3 pack) do you want to order (orders of 3 packs or more): ";
		cin >> userInput;

		Sketchbooks = userInput / 3;

		if (Sketchbooks < 3)
			cout << "You need more sketchbooks to draw with! 3 packs or more.\n";
		else
			cout << "You ordered " << Sketchbooks << " sketchbook packs. Which is" << Sketchbooks * 3 << " sketchbooks in total.\n";
		system("PAUSE");
	}
	//#3
	{
		char userInput = '0';

		system("CLS");
		cout << "Story Problem #3\n\n";

		
		cout << "Would you like Motion Blur (y/n): ";
		cin >> userInput;

		if (userInput == 'y' || userInput == 'n')
			cout << "Motion Blur: ENABLED\n";

		else
			cout << "Not a valid input.\n";
		system("PAUSE");
	}


	//Disposable Calculator
	{
		float ValueOne = 0;
		float ValueTwo = 0;
		char Operator = ' ';

		system("CLS");
		cout << "Disposable Calculator\n\n";

		cout << "Choose first number: ";
		cin >> ValueOne;

		cout << "Choose second number: ";
		cin >> ValueTwo;

		cout << "Choose Operator (+,-,*,/): ";
		cin >> Operator;

		switch (Operator)
		{
		case '+':
			cout << ValueOne << " " << Operator << " " << ValueTwo << " = " << (ValueOne + ValueTwo) << endl;
			break;
		case '-':
			cout << ValueOne << " " << Operator << " " << ValueTwo << " = " << (ValueOne - ValueTwo) << endl;
			break;
		case '*':
			cout << ValueOne << " " << Operator << " " << ValueTwo << " = " << (ValueOne * ValueTwo) << endl;
			break;
		case '/':
			if (ValueTwo != 0)
				cout << ValueOne << " " << Operator << " " << ValueTwo << " = " << (float)(ValueOne / ValueTwo) << endl;
			else
				cout << "Not Valid operation" << endl;
			break;
		default: cout << "Not Valid operator" << endl;
			break;
		}
		system("PAUSE");
	}


	//Battle of Prhistoric Proportions
	{
		int userInput = 0;//Input from the user
		int wins = 0;//Players wins
		int DinosChoice = 0;// Dino's choice
		int DinoWins = 0;//Total Dino Wins

		system("CLS");
		cout << "Dino Games\n\n";

		srand(time_t(NULL));

		//GAME ONE

		cout << "You need at least 3 wins from Dino to win the game. You currently have " << wins - DinoWins << " wins over Dino.\n\n";
		cout << "How would you rate your strength on a scale of 1 to 10? ";
		cin >> userInput;
		DinosChoice = rand() % 11 + 1;

		//Win condition
		if (userInput > DinosChoice)
		{
			system("CLS");
			wins++;
			cout << "You win! Dino's number was " << DinosChoice << ". You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}
		//Lose Condition
		else
		{
			system("CLS");
			cout << "You lost... Dino's number was " << DinosChoice << ". You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}

		system("CLS");
		cout << "You need at least 3 wins from Dino to win the game. You currently have " << wins - DinoWins << " wins over Dino.\n\n";
		cout << "Choose: \n";
		cout << "1) Rock \n";
		cout << "2) Paper \n";
		cout << "3) Scissors \n";
		cin >> userInput;
		DinosChoice = rand() % 4 + 1;

		//Win Condition
		if ((userInput == 1 && DinosChoice == 3) || (userInput == 2 && DinosChoice == 1) || userInput == 3 && DinosChoice == 2)
		{
			system("CLS");
			wins++;
			cout << "You win! You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}
		//Lose Condition
		else
		{
			system("CLS");
			DinoWins++;
			cout << "You lost... You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}

		//GAME TWO
		system("CLS");
		cout << "You need at least 3 wins from Dino to win the game. You currently have " << wins - DinoWins << " wins over Dino.\n\n";
		cout << "How many games have you played with Dino: \n";
		cin >> userInput;

		//Win Condition
		if (userInput == 2)
		{
			system("CLS");
			wins++;
			cout << "You win! You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}
		//Lose Condition
		else
		{
			system("CLS");
			cout << "You lost... You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}

		//GAME THREE
		system("CLS");
		cout << "You need at least 3 wins from Dino to win the game. You currently have " << wins - DinoWins << " wins over Dino.\n\n";
		cout << "Did you get enough sleep: \n";
		cout << "1) Yes \n";
		cout << "2) No \n";
		cin >> userInput;

		//Win Condition
		if (userInput == 1)
		{
			system("CLS");
			wins++;
			cout << "You win! You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}
		//Lose Condition
		else
		{
			system("CLS");
			cout << "You lost... You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}

		//GAME FOUR
		system("CLS");
		cout << "You need at least 3 wins from Dino to win the game. You currently have " << wins - DinoWins << " wins over Dino.\n\n";
		cout << "How much Vitamin C do you get each day: \n";
		cin >> userInput;

		//Win Condition
		if (userInput >= 75)
		{
			system("CLS");
			wins++;
			cout << "You win! You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}
		//Lose Condition
		else
		{
			system("CLS");
			cout << "You lost... You have " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}


		//If you win
		if (wins >= 3)
		{
			system("CLS");
			cout << "You beat dino! You had a total of " << wins - DinoWins << " wins over Dino.\n";
			system("PAUSE");
		}
		//If you lose
		if (wins < 3)
		{
			system("CLS");
			cout << "You lost to dino! Dino had a total of " << DinoWins - wins << " wins over you.\n";
			system("PAUSE");
		}
	}

	//Detecting Captialzation
	{
		char userInput = ' ';
		bool OkToGo = false;

		

		while (!OkToGo)
		{
			system("CLS");
			cout << "Detecting Capitalization\n\n";
			cout << "Choose a letter: ";
			cin >> userInput;

			//If letter is Capital
			if (userInput >= 65 && userInput <= 90)
			{
				cout << "Your letter is a Capital letter \n";
				OkToGo = true;
			}
			//If letter is lowercase
			else if (userInput >= 97 && userInput <= 122)
			{
				cout << "Your letter is a Lowercase letter \n";
				OkToGo = true;
			}
			//If not a letter at all
			else
			{
				system("CLS");
				cout << "You must Provide a letter \n";
				system("PAUSE");
			}
		}

		system("PAUSE");
	}

	// Using the Ternary Operator
	{
		/*Rewrite the following to be a Ternary Operator
		int number = 23;

		if(number >= 20)
		{
		number *= 5;
		}
		*/


		//int number = (number >= 20) ? (20 * 5) : 23;


		/*
		int number = 6;

		 if(number < 20)
		{
			number = number - 5;
		}
		else
		{
			number = number / 2;
		}
		*/


		//int number = 6;
		//number = (number < 20) ? (number - 5) : (number / 2);
	}



	system("PAUSE");
	return 0;
}