#include "mathutils.h"




int main()
{
	printHello();
	cout << SquareRoot(5) << endl;
	cout << Fraction(1, 2) << endl;
	cout << LargestDifference(1, 9, 4) << endl;
	CommaInbetween(6, 3);
	cout << SumOfThree(3, 5, 7) << endl;
	cout << LesserOfTwo(3, 6) << endl;
	cout << GreatorOfTwo(3, 6) << endl;
	cout << Clamp(1, 9, 13) << endl;
	cout << Distance(7,23,9,0) << endl;
	cout << TimeOfArrival(0,0,0,4,1) << endl;
	cout << linearInterpolation(2, 5, 0.5) << endl;

	system("PAUSE");
	return 0;
}
