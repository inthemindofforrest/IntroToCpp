#include "Header.h"


void CharStringAppend(char * MainString, char * CharToAppend, char * Destination)
{
	int j = 0;
	for (int i = 0; i < strlen(MainString); i++)
	{
			Destination[j] = MainString[i];
			j++;
	}
	for (int i = 0; i < strlen(CharToAppend); i++)
	{
			Destination[j] = CharToAppend[i];
			j++;
	}
}
void InsertIntoString(char * MainString, char * CharToAppend, char * Destination, int Position)
{
	int j = 0;
	int k = 0;

	for (int i = 0; i < Position; i++)
	{
		Destination[j] = MainString[i];
		j++;
	}
	for (int i = 0; i < strlen(CharToAppend); i++)
	{
		Destination[j] = CharToAppend[i];
		j++;
	}
	for (int i = Position; i < strlen(CharToAppend); i++)
	{
		Destination[j] = MainString[i];
		j++;
	}
}
int WordCount(char * String)
{
	bool Letter = false;
	int counter = 0;

	for (int i = 0; i < strlen(String); i++)
	{
		if (String[i] < 65 || String[i] > 90 && String[i] < 97 || String[i] > 122)
			Letter = false;
		else
		{
			if (Letter == false)
				counter++;
			Letter = true;
		}
	}
	return counter;
}
void CharacterLimit(char * String, int LineLimit)
{

	for (int i = LineLimit; i < strlen(String); i += LineLimit)
	{
			int j;
			for (j = i; ; j--)
			{
				if (String[j] == 32)
				{
					i = j + 1;
					String[j] = '\n';
					break;
				}
			}
	}
}


void AddContact(ADDRESSBOOK Book)
{

}
void RemoveContactByName(ADDRESSBOOK Book)
{

}
void RemoveContactByNumber(ADDRESSBOOK Book)
{
	cout << "Removed!" << endl;
	system("PAUSE");
}
void SortContacts(ADDRESSBOOK Book)
{

}
void DisplayAddressBook(ADDRESSBOOK Book)
{

}



void AddressBookCommands(ADDRESSBOOK AddressBook)
{
	string Command;


	cout << "Address Book commands: " << endl;
	cout << "add contact" << endl;
	cout << "remove contact" << endl;
	cout << "sort contact" << endl;
	cout << "display contacts" << endl;

	getline(cin, Command);
	
	for(int i = 0; i < Command.length(); i++)
		tolower(Command[i]);

	if (Command.find("add", 0))
	{
		AddContact(AddressBook);
	}
	else if (Command.find("remove", 0))
	{
		cout << " Sort by Name" << endl;
		cout << "      or     " << endl;
		cout << "Sort by number" << endl;
		getline(cin, Command);
		if (Command.find("name"))
			RemoveContactByName(AddressBook);
		else if (Command.find("number"))
			RemoveContactByNumber(AddressBook);
	}
	else if (Command.find("sort", 0))
	{
		SortContacts(AddressBook);
	}
	else if (Command.find("display", 0))
	{
		DisplayAddressBook(AddressBook);
	}
}