#include "Header.h"

int main()
{
	//int Array[5] = { 0 };
	Entity entity[] = { {"Player", 100, 20, 0, 0, 0, 0},{ "DungeoanMimic", 100, 20, 0, 0, 0, 0 },{ "OrangeSlime", 100, 20, 0, 0, 0, 0 },
	{ "Kinsman", 100, 20, 0, 0, 0, 0 },{ "Woofers", 100, 20, 0, 0, 0, 0 }};
	//Entity entity[5];
	//DigitalPrinter();
	//SaveData();
	//TextCorruption();
	//ReadSaveWithCommas(Array, sizeof(Array) / sizeof(int));
	//SaveGameData(entity, sizeof(entity) / sizeof(Entity));
	LoadGameData(entity, sizeof(entity) / sizeof(Entity));

	return 0;
}


void DigitalPrinter()
{
	bool OkToGo = false;
	string FilePath;
	string Line;
	fstream file;

	while (!OkToGo)
	{
		system("CLS");
		cout << "What is the file path you want to open?" << endl;
		getline(cin, FilePath);

		file.open(FilePath, ios::in);

		if (file.is_open())
		{
			while (getline(file,Line))
			{
				cout << Line << endl;
			}


			file.clear();
			file.flush();
			file.close();

			system("PAUSE");
			OkToGo = true;
		}
		else
		{
			cout << "File failed to open." << endl;
			system("PAUSE");
		}
	}
}
bool SaveData()
{
	bool OkToGo = false;
	string FilePath;
	string Input;
	fstream file;

	while (!OkToGo)
	{
		system("CLS");
		cout << "What is the file path you want to open?" << endl;
		getline(cin, FilePath);

		file.open(FilePath, ios::out);

		if (file.is_open())
		{
			cout << "Name: " << "Who are you?" << endl;
			getline(cin, Input);
			file << Input << endl;

			cout << "Age: " << "How old are you?" << endl;
			getline(cin, Input);
			file << Input << endl;

			cout << "Favorite Color: " << "What is your favorite color?" << endl;
			getline(cin, Input);
			file << Input << endl;

			file.flush();
			file.close();

			return true;
		}
		else
		{
			cout << "File failed to open." << endl;
			system("PAUSE");
			return false;
		}
	}
}
void TextCorruption()
{
	bool OkToGo = false;
	string FilePath;
	string Line;
	fstream file;
	size_t Random;

	srand(time(NULL));

	while (!OkToGo)
	{
		system("CLS");
		cout << "What is the file path you want to open?" << endl;
		getline(cin, FilePath);

		file.open(FilePath, ios::in);

		if (file.is_open())
		{
			while (getline(file, Line))
			{
				for (int i = 0; i < Line.length(); i++)
				{
					Random = rand() % 100;
					if(Random > 75)
						Line[i] = 35;
				}
				cout << Line << endl;
			}

			file.close();
			system("PAUSE");
		}
		
		else
		{
			cout << "File failed to open." << endl;
			system("PAUSE");
		}
	}
}
void ReadSaveWithCommas(int * Array, size_t Size)
{
	bool OkToGo = false;
	string FilePath;
	string Line;
	string CurrentElement;
	fstream file;

	int Element = 0;

	while (!OkToGo)
	{
		system("CLS");
		cout << "What is the file path you want to open?" << endl;
		getline(cin, FilePath);

		file.open(FilePath, ios::in);

		if (file.is_open())
		{
			while (getline(file, Line))
			{
				for (int i = 0; (i <= Line.length() && Element < Size); i++)
				{
					if (Line[i] == ',' || (i == Line.length()))
					{
						Array[Element] = stoi(CurrentElement);
						Element++;
						CurrentElement.clear();
					}
					else
					{
						if(Line[i] != '\n' || Line[i] != -1)
							CurrentElement += Line[i];
					}
				}
				cout << Line << endl;
			}
			


			file.flush();
			file.close();
			for (int i = 0; i < Size; i++)
			{
				if(i == Size - 1)
					cout << Array[i] << "." << endl;
				else
					cout << Array[i] << ", ";

			}
			system("PAUSE");
			return;
		}
		else
		{
			cout << "File failed to open." << endl;
			system("PAUSE");
		}
	}
}
void LoadGameData(Entity * entity, size_t size)
{
	string FilePath;
	string Line;
	fstream file;
	int Element = 0;

	system("CLS");

	file.open("Save.txt", ios::in);

	if (file.is_open())
	{
			while (getline(file, Line))
			{
				if (Element < size)
				{
					if (Line.length() == 0 || Line[0] != '@')
						continue;

					Entity temp;
					temp.Name = Line;

					getline(file, Line);
					temp.hitpoints = stof(Line);

					getline(file, Line);
					temp.armor = stof(Line);

					getline(file, Line);
					temp.strength = stoi(Line);

					getline(file, Line);
					temp.defense = stoi(Line);

					getline(file, Line);
					temp.agility = stoi(Line);

					getline(file, Line);
					temp.luck = stoi(Line);

					entity[Element] = temp;
					Element++;
				}
			}

		file.flush();
		file.close();

	}

	else
	{
		cout << "File failed to open." << endl;
		system("PAUSE");
	}
}
void SaveGameData(Entity * entity, size_t size)
{
	string FilePath;
	string Input;
	fstream file;

		system("CLS");

		file.open("Save.txt", ios::out);

		if (file.is_open())
		{
			for (int i = 0; i < size; i++)
			{
				file << "@" << entity[i].Name << endl;
				file << entity[i].hitpoints << "f" << endl;
				file << entity[i].armor << "f" << endl;
				file << entity[i].strength << endl;
				file << entity[i].defense << endl;
				file << entity[i].agility << endl;
				file << entity[i].luck << endl;
				file << endl;
				file << endl;
			}

			file.flush();
			file.close();

		}
		else
		{
			cout << "File failed to open." << endl;
			system("PAUSE");
		}
}