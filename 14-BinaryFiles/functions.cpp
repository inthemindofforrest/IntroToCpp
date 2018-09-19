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

void MonsterCreatureQuest()
{
	bool OkToGo = false;
	char UserInput;
	string Name;
	string ID;
	string Input;
	string Description;

	while (!OkToGo)
	{
		system("CLS");
		cout << "What would you like to do?" << endl;

		cout << "1) Add a new monster by ID" << endl;
		cout << "2) Remove a monster by ID" << endl;
		cout << "3) View a monster by ID" << endl;
		cout << "4) Show all monsters" << endl;
		cout << "5) Exit" << endl;

		cin >> UserInput;
		cin.clear();

		switch (UserInput)
		{
		case '1':
			system("CLS");
			cin.ignore();
			cout << "What is your monsters name?" << endl;
			getline(cin, Input);
			Name = Input;
			cout << "What is your monsters ID?" << endl;
			getline(cin, Input);
			ID = Input;
			cout << "What is your monsters description?" << endl;
			getline(cin, Input);
			Description = Input;
			AddMonster(ID, Name, Description);
			break;
		case '2':
			RemoveMonster();
			break;
		case '3':
			ViewMonster();
			break;
		case '4':
			DisplayMonsters();
			break;
		case '5':
			system("CLS");
			cout << "Goodbye" << endl;
			system("PAUSE");
			return;
			break;
		default:
			continue;
			break;
		}
	}
}

void AddMonster(string ID, string Name, string Description)
{
	fstream UltimateSave;
	string Buffer;
	
	Monster temp;
	temp.MonsterID = ID;
	temp.Description = Description;
	temp.monsterName = Name;

	SaveMonsterToFile(temp);
}
void RemoveMonster()
{
	fstream file;
	fstream fileCopy;
	string Input;
	string ID;
	int LineNumber = 0;
	cin.ignore();

	system("CLS");
	cout << "What ID would you like to remove?" << endl;
	getline(cin, Input);
	ID = Input;
	Input.append(".bin");
	if (ifstream(Input) && GetMonster(ID))
	{
		string Line;
		remove(Input.c_str());
		file.open("Monsters.bin", ios::in | ios::binary);
		fileCopy.open("MonstersCopy.bin", ios::out | ios::binary);
		if (file.is_open() && fileCopy.is_open())
		{
			while (getline(file, Line))
			{
				if(LineNumber != GetMonsterNumber(ID))
					fileCopy << Line << endl;
				LineNumber++;
			}
			file.close();
			fileCopy.close();
			remove("Monsters.bin");
			rename("MonstersCopy.bin", "Monsters.bin");
		}
		else
		{
			cout << "One of the files did not open" << endl;
			system("PAUSE");
		}


		
	}
	else
	{
		cout << "That file does not exist!" << endl;
		system("PAUSE");
	}
}
void ViewMonster()
{
	string Input;
	string Name;
	string ID;
	string Description;
	string Line;
	fstream file;

	cin.ignore();

	system("CLS");
	cout << "Which Monster ID would you like to view?" << endl;
	getline(cin, Input);
	ID = Input;
	Input.append(".bin");
	if (ifstream(Input) && GetMonster(ID))
	{
		
		file.open(Input, ios::in | ios::binary);
		if (file.is_open())
		{
			getline(file, Line);
			cout << "ID: " << Line << endl;
			

			getline(file, Line);
			cout << "Name: " << Line << endl;

			getline(file, Line);
			cout << "Description: " << Line << endl;
			system("PAUSE");

			file.close();
		}
		else
		{
			cout << "The file did not open" << endl;
			system("PAUSE");
		}
	}
	else
	{
		cout << "That file does not exist" << endl;
		system("PAUSE");
	}

}
void DisplayMonsters()
{
	fstream file;
	fstream SecondFile;
	string Input;
	string ID;
	string Line;


	file.open("Monsters.bin", ios::in | ios::binary);
	if (file.is_open())
	{
		while (getline(file, Line))
		{

			cout << endl;


			if (Line.length() != 0)
			{
				Input.clear();
				for (int i = 0; i < Line.length(); i++)
				{
					if (Line[i] != ',')
						Input += Line[i];
					else
						break;
				}
				ID = Input;

				Input.append(".bin");

				if (ifstream(Input) && GetMonster(ID))
				{
					SecondFile.open(Input, ios::in | ios::binary);
					if (SecondFile.is_open())
					{
						getline(SecondFile, Line);
						cout << "ID: " << Line << endl;

						getline(SecondFile, Line);
						cout << "Name: " << Line << endl;

						getline(SecondFile, Line);
						cout << "Description: " << Line << endl;

						SecondFile.close();
					}
					else
					{
						cout << "The Second file did not open" << endl;
						system("PAUSE");
					}
				}
			}
			else
			{
				cout << "File Line length is 0" << endl;
				system("PAUSE");
			}
		}
		file.close();
		system("PAUSE");
	}

}


int GetMonsterNumber(string tempID)
{
	fstream UltimateSave("Monsters.bin", ios::in | ios::binary);
	string Buffer;
	string ID;
	string id;
	int LineNumber = 0;

	if (UltimateSave.is_open())
	{
		while (getline(UltimateSave, Buffer))
		{
			ID.clear();
			if (Buffer.length() != 0)
			{
				for (int i = 0; i < Buffer.length(); i++)
				{
					if (Buffer[i] != ',')
						ID += Buffer[i];
					else
						break;
				}
				if (ID == tempID)
				{
					UltimateSave.close();
					return LineNumber;
				}
			}
			LineNumber++;
		}

		UltimateSave.close();
	}
	else
	{
		cout << "File could not open" << endl;
		system("PAUSE");
		return NULL;
	}
	return 0;
}
int GetMonster(string tempID)
{
	fstream UltimateSave("Monsters.bin", ios::in | ios::binary);
	string Buffer;
	string ID;
	string id;

	if (UltimateSave.is_open())
	{
		while (getline(UltimateSave, Buffer))
		{
			ID.clear();
			if (Buffer.length() != 0)
			{
				for (int i = 0; i < Buffer.length(); i++)
				{
					if (Buffer[i] != ',')
						ID += Buffer[i];
					else
						break;
				}
				if (ID.length() != 0)
					id = ID;
				if (id == tempID)
				{
					UltimateSave.close();
					return 1;
				}
			}
		}
			
		UltimateSave.close();
	}
	return 0;
}
void SaveMonsterToFile(Monster temp)
{
	fstream file;
	string tempName;
	bool MonsterExist = GetMonster(temp.MonsterID);

	if (!MonsterExist)
	{
		file.open("Monsters.bin", ios::app | ios::binary);

		if (file.is_open())
		{
			file << temp.MonsterID << "," << temp.monsterName << "," << temp.Description << endl;
			tempName = temp.MonsterID;
			tempName.append(".bin");

			//file.flush();
			file.close();
		}
		else
		{
			cout << "File could not be opened" << endl;
			system("PAUSE");
		}
		file.open(tempName, ios::out | ios::binary);

			if (file.is_open())
			{
				file << temp.MonsterID << endl;
				file << temp.monsterName << endl;
				file << temp.Description << endl;
			}
			else
			{
				cout << "Second File could not be opened" << endl;
				system("PAUSE");
			}
	}
}


