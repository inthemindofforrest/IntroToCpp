#include "Header.h"

int main()
{
	char String[] = "The Cat Jumped OvEr the Moon";
	bool Check = false;
	//Greeting();
	//FavoriteColor();
	//cout << String << endl;
	//MyToUpper(String);
	//cout << String << endl;
	//RemoveSpaces();
	//Substring(0, 13, String);
	//Check = PalindromeTest(String);
	//if (Check)
	//	cout << String << " is a Palindrome." << endl;
	//else
	//	cout << String << " is NOT a Palindrome." << endl;
	//cout << StringLength(String) << endl;
	//ReverseString(String);
	cout << String << endl;
	ShiftCipher(String, 2, true);
	cout << String << endl;
	ShiftCipher(String, 2, false);
	cout << String << endl;

	system("PAUSE");
	return 0;
}