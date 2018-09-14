#include "Header.h"

void AppendHelloWorld(string Path)
{
	fstream file;

	file.open(Path, ios::app | ios::binary);

	if (file.is_open())
	{

		file << "Hello World";

		file.flush();
		file.close();
	}
	else
	{
		cout << "File name: " << Path << " could not be opened" << endl;
		system("PAUSE");
	}

}
void SaveGame(saveData localData)
{
	fstream file;

	file.open("Save.bin", ios::out | ios::binary);

	if (file.is_open())
	{
		file << "!" << endl;
		file << localData.playerName << endl;
		file << localData.deathCount << endl;
		file << localData.deepestFloor << endl;
		file << localData.hasBeenBeatenGame << endl;
		file << localData.timePlayed;



		file.flush();
		file.close();
	}
	else
	{
		cout << "File could not be opened" << endl;
		system("PAUSE");
	}
}
void LoadGame(saveData * Data, size_t size)
{
	fstream file;
	string Line;
	int Element = 0;

	file.open("Save.bin", ios::in | ios::binary);

	if (file.is_open())
	{
		while (getline(file, Line))
		{
			if (Element < size)
			{
				if (Line[0] != '!' || Line.length() == 0)
				{
					continue;
				}
				else
				{
					getline(file, Line);
					Data[Element].playerName = Line;

					getline(file, Line);
					Data[Element].deathCount = stoi(Line);

					getline(file, Line);
					Data[Element].deepestFloor = stoi(Line);

					getline(file, Line);
					Data[Element].hasBeenBeatenGame = stoi(Line);

					getline(file, Line);
					Data[Element].timePlayed = stod(Line);
				}
			}
		}
		file.flush();
		file.close();
	}
	else
	{
		cout << "File could not be opened" << endl;
		system("PAUSE");
	}
}

/*Create, remove, and edit an assignment.
Create, remove, and edit records for a student's work for an assignment.
Print all grades for a given student.
Print all grades for a given assignment.*/



void SaveGradebook(gradebook * Data, size_t size)
{

}
void LoadGradebook(gradebook * Data, size_t size)
{

}
