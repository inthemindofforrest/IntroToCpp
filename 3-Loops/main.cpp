#include<iostream>
#include<math.h>

void EvenOrOdd(int start, int end);



int main()
{

	////Counting 1-100
	//{
	//	for (int i = 1; i <= 100; i++)
	//		std::cout << i << std::endl;
	//}

	////Counting 100-1
	//{
	//	for (int i = 100; i >= 1; i--)
	//		std::cout << i << std::endl;
	//}

	////Counting 1995-2017
	//{
	//	for (int i = 1995; i < 2018; i++)
	//		std::cout << i << std::endl;
	//}

	////Three Favorite Numbers
	//{
	//	int Favorites[3] = {NULL, NULL, NULL};

	//	for (int i = 0; i < 3; i++)
	//	{
	//		std::cout << "What is your first favorite number?" << std::endl;
	//		std::cin >> Favorites[i];

	//		if (Favorites[2] != NULL)
	//		{
	//			std::cout << "\nYour favorite numbers are " << Favorites[0] << ", " << Favorites[1] << ", and " << Favorites[2] << std::endl;
	//		}
	//		else if (Favorites[1] != NULL)
	//		{
	//			std::cout << "\nYour favorites have been " << Favorites[0] << " and " << Favorites[1] << std::endl;
	//		}
	//		else if (Favorites[0] != NULL)
	//		{
	//			std::cout << "\nYour first number is " << Favorites[i] << std::endl;
	//		}
	//	}
	//}

	////From x to y
	//{
	//	int StartingNumber = 0;
	//	int EndingNumber = 0;

	//	std::cout << "What is the starting number?" << std::endl;
	//	std::cin >> StartingNumber;

	//	std::cout << "What is the ending number?" << std::endl;
	//	std::cin >> EndingNumber;

	//	for (int i = StartingNumber; i <= EndingNumber; i++)
	//	{
	//		std::cout << i;
	//		if(i != EndingNumber)
	//			std::cout << ", ";
	//		else
	//			std::cout << "." << std::endl;
	//	}
	//		
	//	

	//}

	////Largest always
	//{
	//	int QtyRequest = 0;
	//	int HighestNumber = 0;

	//	std::cout << "Enter a Quantity: ";
	//	std::cin >> QtyRequest;
	//	std::cout << "\n";
	//	for (int i = QtyRequest; i > 0; i--)
	//	{
	//		int userInput = 0;
	//		std::cout << "Choose a number: ";
	//		std::cin >> userInput;
	//		if (userInput > HighestNumber)
	//			HighestNumber = userInput;



	//	}
	//	std::cout << HighestNumber << " is the biggest number.\n";
	//}

	////Smallest always
	//{
	//	int QtyRequest = 0;
	//	int LowestNumber = 0;

	//	std::cout << "Enter a Quantity: ";
	//	std::cin >> QtyRequest;
	//	std::cout << "\n";
	//	for (int i = QtyRequest; i > 0; i--)
	//	{
	//		
	//		int userInput = 0;

	//		std::cout << "Choose a number: ";
	//		std::cin >> userInput;
	//		if(i == QtyRequest)
	//			LowestNumber = userInput;

	//		if (userInput < LowestNumber)
	//			LowestNumber = userInput;



	//	}
	//	std::cout << LowestNumber << " is the smallest number.\n";
	//}

	//

	////Even or Odd
	//{
	//	int start = 0;
	//	int end = 0;

	//	std::cout << "Starting: \n";
	//	std::cin >> start;

	//	std::cout << "Ending: \n";
	//	std::cin >> end;

	//	EvenOrOdd(start,end);
	//}

	////Fizz Buzz
	//{
	//	int start = 0;
	//	int end = 0;

	//	std::cout << "Starting: \n";
	//	std::cin >> start;

	//	std::cout << "Ending: \n";
	//	std::cin >> end;

	//	for (int i = start; i <= end; i++)
	//	{
	//		if (i % 5 == 0 && i % 3 == 0)
	//			std::cout << "FizzBuzz";

	//		else if (i % 5 == 0)
	//			std::cout << "Buzz";
	//		else if (i % 3 == 0)
	//			std::cout << "Fizz";
	//		else
	//			std::cout << i;

	//		if (i == end)
	//			std::cout << "." << std::endl;
	//		else
	//			std::cout << ", ";
	//	}
	//}

	//Grid Generator
	{
		int width = 0;
		int height = 0;

		std::cout << "Width: \n";
		std::cin >> width;

		std::cout << "Height: \n";
		std::cin >> height;

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				std::cout << "/_\\";
			}
			std::cout << "\n";
		}
	}

	//Higher or Lower
	{
		int lower = 0;
		int higher = 20;
		int randomNumber = 0;
		srand(higher);
		randomNumber = rand();
		
	}


	system("PAUSE");
	return 0;
}

void EvenOrOdd(int start, int end)
{
	for (int i = start; i <= end; i++)
	{

		if (i % 2 == 0)
			std::cout << "Even";
		else
			std::cout << "Odd";
		if (i < end)
		{
			std::cout << ", ";
		}
		else
		{
			std::cout << "." << std::endl;
		}
	}
}