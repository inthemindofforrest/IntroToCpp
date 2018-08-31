#pragma once
#include<iostream>
#include<string>
#include<math.h>
#include<time.h>

using namespace std;

struct INVENTORY
{
	int ID;
	int Gold;
};

struct CHARACTER
{
	int Attack;
	int Defense;
	int Experience;
	INVENTORY * Inventory;
};



int * zeroArray(int size);
int * duplicateArray(int * OriginalArray, int size);
void PrintInt(int * arr, int size);
void PlayerChooseNumbers();
CHARACTER * NewCharacter(int size);
void DisplayCharacter(CHARACTER * arr, int size);