#include <iostream>
#include "AussiegochiHeader.h"

using namespace std;

struct MyStruct
{
	int a = 1;
	int b = 3;
	int c = 0;
};

void Product(float a, float b, float& product);
void productOfStruct(MyStruct& myStruct);
void swap(float &a, float &b);

int main()
{
	//int myVal = 0;
	//int& myRef = myVal;

	//cout << myVal << endl;
	//cout << myRef << endl;

	//myVal = 2;
	//myRef = 3;

	//cout << myVal << endl;
	//cout << myRef << endl;

	/*int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';

	int& numRef = num;
	float& decRef = dec;
	bool& tfRef = tf;
	char& letterRef = letter;*/

	Aussiegochi Pet;
	int UserInput;

	while (!false)
	{
		system("CLS");
		PrintAusStats(Pet);

		cout << "1) Feed" << endl;
		cout << "2) Water" << endl;
		cout << "3) Abuse" << endl;
		cout << "4) Coddle" << endl;
		cout << "5) Stomp on Aus" << endl;

		cin >> UserInput;

		switch (UserInput)
		{
		case 1:
			feedAussie(Pet);
			break;
		case 2:
			waterAussie(Pet);
			break;
		case 3:
			abuseAussie(Pet);
			break;
		case 4:
			coddleAussie(Pet);
			break;
		case 5:
			system("CLS");
			cout << "Aussiegochi is dead." << endl;
			system("PAUSE");
			return 0;
			break;
		default:
			break;
		}
	}



	return 0;
}


void Product(float a, float b, float& product)
{
	product = a * b;
}
void productOfStruct(MyStruct& myStruct)
{
	myStruct.c = myStruct.a * myStruct.b;
}
void swap(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;

}


