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

struct record
{
	int studentId;              // corresponding student ID
	int assignmentId;           // corresponding assignment ID
	int pointsAwarded;          // points given to student for assignment
};

struct assignment
{
	std::string assignmentName; // name of assignment
	int id;                     // id no. for assignment
	int maxPoints;              // maximum possible points for assignment
};

class gradebook
{
public:
	size_t assignmentCount;
	size_t recordCount;

	assignment * assignments;
	record * records;
};

void AppendHelloWorld(string Path);
void SaveGame(saveData Data);
void LoadGame(saveData * Data, size_t size);