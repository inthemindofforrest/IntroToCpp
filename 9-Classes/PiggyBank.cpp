#include "PiggyBank.h"

// Add funds to the value of the current balance.
void DigitalPiggyBank::deposit(float net)
{
	currentBalance += net;
}

// Returns and clears the total current balance.
float DigitalPiggyBank::withdraw()
{
	float Temp = currentBalance;
	currentBalance = 0;
	return Temp;
}

// Returns the current balance of the function.
float DigitalPiggyBank::balance()
{
	return currentBalance;
}