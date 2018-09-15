#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

struct saveData
{
	string playerName;
	int deathCount;
	int deepestFloor;

	bool hasBeenBeatenGame;

	double timePlayed;  // given in seconds
};

struct Monster
{
	string monsterName;
	string MonsterID;
	string Description;
};

void AppendHelloWorld(string Path);
void SaveGame(saveData Data);
void LoadGame(saveData * Data, size_t size);


void MonsterCreatureQuest();
void AddMonster(string ID, string Name, string Description);
void RemoveMonster();
void ViewMonster();
void DisplayMonsters();
void SaveMonsterToFile(Monster temp);
int GetMonster(string tempID);
int GetMonsterNumber(string tempID);