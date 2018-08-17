#include<iostream>

void PrintEnd()
{
	std::cout <<
		"__________                    _________\n" <<
		"    ||         ||     ||     |         \n" <<
		"    ||         ||     ||     |         \n" <<
		"    ||         ||=====||     |______   \n" <<
		"    ||         ||     ||     |         \n" <<
		"    ||         ||     ||     |_________\n\n\n" <<
		" _________     ____     __    ___        \n" <<
		" |             ||\\ \\    ||   |   \\       \n" <<
		" |             || \\ \\   ||   |    \\      \n" <<
		" |______       ||  \\ \\  ||   |     |     \n" <<
		" |             ||   \\ \\ ||   |    /      \n" <<
		" |_________    ||    \\ \\||   |___/       \n";
}

int main()
{
	////First
	//{
	//	//int One = 1;
	//	//int Two = 2;
	//	//int TwoAndAHalf = 0;
	//	//float Three = 3.0f;
	//	//float Four = 4.001f;
	//	//float FourAndAHalf = 0;


	//////Getting input for the 2 integers
	////std::cout << "First int: ";
	////std::cin >> One;
	////std::cout << "\nsecond int: ";
	////std::cin >> Two;

	//////Getting input for the 2 Floats
	////std::cout << "First Float: ";
	////std::cin >> Three;
	////std::cout << "\nSecond Float: ";
	////std::cin >> Four;
	////std::cout << "\n";


	//////Displaying the results
	////TwoAndAHalf = (One + Two);
	////FourAndAHalf = (Three + Four);
	///*std::cout << "int: " << TwoAndAHalf << "\nfloat: " << FourAndAHalf << std::endl;*/
	//}
	//


	////Area of rectangle
	//{
	//	int width = 0;
	//	int height = 0;

	//	std::cout << "Area is: " << (width * height) << std::endl;































	//}

	////farenheit Converter
	//{
	//	float farienheit = 0;
	//	float Celcius = 0;

	//	std::cout << "farienheit is: " << (farienheit * 1.8 + 32) << std::endl;
	//}

	////Swap
	//{
	//	int x = 6;
	//	int y = 0;
	//	
	//	std::swap(x, y);
	//	std::cout << "New x: " << x << "\nNew y: " << y << std::endl;
	//}
	//
	////Fun Facts About Age
	//{
	//	float userInput = 0;
	//	std::cout << "What is your age? \n";
	//	std::cin >> userInput;
	//	std::cout << "Months since birth: " << (userInput * 12) << std::endl;
	//	std::cout << "Decades since birth: " << (float)(userInput / 10) << std::endl;
	//	std::cout << "Scores since birth: " << (float)(userInput / 20) << std::endl;
	//	std::cout << "Lives left in Japan: " << (84 - userInput) << std::endl;
	//	std::cout << "Lives left in United States: " << (79 - userInput) << std::endl;
	//	std::cout << "Lives left in Sierra Leone: " << (50 - userInput) << std::endl;

	//}

	//
	////COnforming to Convention
	//{
	//	int age;
	//	int bullet_count;
	//	float dog_years;
	//	int qty;
	//	float shield_value;
	//	float defense_matrix_cooldown;
	//	int red_armor_value;
	//	float red_armor_ratio;
	//	int happiness;
	//	int gandhi_aggression;
	//}

	//Right Tool For the job
	//{
	//	int Integer;                //whole number
	//	float FloatingPoint;        //decimal up to 7 places
	//	double DoubleFloatingPoint; //decimal up to 15
	//	char Character;             //Single Character
	//	bool Boolean;               //true or false with 0 or 1
	//	char* string;               //multiple characters

	//}

	//Handling errors
	{
		int userInput = 0;

		while (userInput == NULL)
		{
			userInput = 0;
			system("CLS");
			std::cout << "What is your favorite Number? \n";
			std::cin >> userInput;
		}
		
		
	}




	std::cout << "\n\n";
	system("PAUSE");
	return 0;
}