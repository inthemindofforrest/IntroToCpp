#pragma once
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

struct Score
{
	int HighScore;
	int TimeToComplete;
};



void MultipleChoice();
void PrintMultiplesOfFive(int start, int end);
void BirthdayCakeCandles(int arr[], int size);
void ArrayRotation(int arr[], int size, int rotation);
int HighScore(Score score[], int size, int start);
float AverageOfTimes(Score score[], int size);
void SortScores(Score score[], Score sortedScores[], int size);
int DifferenceInScores(Score score[], int N);