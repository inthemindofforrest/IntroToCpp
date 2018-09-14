#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

struct Entity
{
	// use std::string or cstrings to represent the name; it's up to you!
	string Name;

	float hitpoints;
	float armor;

	int strength;
	int defense;
	int agility;
	int luck;
};

void DigitalPrinter();
bool SaveData();
void TextCorruption();
void ReadSaveWithCommas(int * Array, size_t Size);
void LoadGameData(Entity * entity, size_t size);
void SaveGameData(Entity * entity, size_t size);