#include <iostream>
#include <cmath>
#include "FunctionsClass.hpp"

using namespace std;

int FunctionsClass::factorial(int number) 
{
	int counter = 1;
	
	for (int i = number; i > 1 ; i--)
	{
		counter *= i;
	}
	
	return counter;
}

double FunctionsClass::findE(int exponent, bool hasExponent)
{
	double e = 1;
	int i = 1;
	
	while (i <= 10)
	{
		if (hasExponent)
		{
			e += (double)pow(exponent, i)/factorial(i); 
		}
		else
		{
			e += 1.0/factorial(i);
		}
			
		i++;
	}
	
	return e;
}
