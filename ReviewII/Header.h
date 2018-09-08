#pragma once
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct PERSON
{
	string Name;
	string Number;
	string AddressLine1;
	string AddressLine2;
	string City;
	string State;
	string ZipCode;
};

struct ADDRESSBOOK
{
	PERSON Person[50];
};





void CharStringAppend(char * MainString, char * CharToAppend, char * Destination);
void InsertIntoString(char * MainString, char * CharToAppend, char * Destination, int Position);
int WordCount(char * String);
void CharacterLimit(char * String, int LineLimit);
void AddressBookCommands(ADDRESSBOOK AddressBook);