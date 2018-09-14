#include "Header.h"


int main()
{
	//AppendHelloWorld("Test.bin");
	saveData  Data[1] = { {" ", 0,0,0,0} };
	//SaveGame(Data);
	LoadGame(Data, sizeof(Data) / sizeof(saveData));

	return 0;
}