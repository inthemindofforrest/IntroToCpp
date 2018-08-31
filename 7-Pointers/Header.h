#pragma once
#include <iostream>
#include <string>

using namespace std;


void printFloats(float * arr, int size);
void arraySum(int * arr, int size);
void initBools(bool * arr, int size, bool defaultValue);
void TransferArray(int * arr, int * SecondArr, int start, int end, int SizeOfSecond);
char * LetterSearch(char * Word, char Search);
void SwappingPointers(int *& Number1, int *& Number2);