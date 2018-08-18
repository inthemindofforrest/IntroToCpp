#include "mathutils.h"

void printHello()
{
	cout << "Hello Functions" << endl;
}

int SquareRoot(int number)
{

	return number * number;
}

float Fraction(int Numerator, int Denominator)
{
	return (float)Numerator / (float)Denominator;
}

float LargestDifference(float First, float Second, float Third)
{
	float FirstToSecond = First - Second;
	float SecondToThird = Second - Third;
	float ThirdToFirst = First - Third;

	if (abs(FirstToSecond) > abs(SecondToThird) && abs(FirstToSecond) > abs(ThirdToFirst))
		return abs(FirstToSecond);
	else if (abs(SecondToThird) > abs(FirstToSecond) && abs(SecondToThird) > abs(ThirdToFirst))
		return abs(SecondToThird);
	else if (abs(Third) > abs(SecondToThird) && abs(ThirdToFirst) > abs(First))
		return abs(ThirdToFirst);

	return 0.0f;
}

void CommaInbetween(int First, int Second)
{
	cout << First << ", " << Second << endl;
}

int SumOfThree(int First, int Second, int Third)
{
	return First + Second + Third;
}

int LesserOfTwo(int First, int Second)
{
	if (First < Second)
		return First;
	else
		return Second;
}

int GreatorOfTwo(int First, int Second)
{
	if (First > Second)
		return First;
	else
		return Second;
}

int Clamp(int Min, int Max, int Number)
{
	if (Number < LesserOfTwo(Min, Max))
		return Min;
	else if (Number > GreatorOfTwo(Min, Max))
		return Max;
	else
		return Number;

}

float Distance(int x1, int y1, int x2, int y2)
{
	float XLine = abs((float)x1 - (float)x2);
	float YLine = abs((float)y1 - (float)y2);

	return (float)sqrt(XLine * XLine + YLine * YLine);
}

float TimeOfArrival(int First, int Second, int Third, int Fourth, int Fifth)
{
	
	return (float)Distance(First, Second, Third, Fourth) / Fifth;
}

double linearInterpolation(int First, int Second, double Third)
{
	
	return (First * Third) + (Second * Third);
}

void HighLowGame()
{
	int RandomNumber = rand() % 100;

}
