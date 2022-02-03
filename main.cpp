#include <iostream>
#import "FunctionsClass.hpp"

using namespace std;

int main() 
{	
	FunctionsClass functions;
	
	int number = 0, exponent;
	
	cout << "ASKISI 1\n";
	cout << "Enter number to find factorial: ";
	cin >> number;
	cout << number << "! = " << functions.factorial(number) << endl;
	
	cout << endl;
	
	cout << "ASKISI 2\n";
	cout << "e = " << functions.findE(0, 0) << endl;
	
	cout << endl;
	
	cout << "ASKISI 3\n";
	cout << "Enter exponent: ";
	cin >> exponent;
	cout << "e^" << exponent << " = " << functions.findE(exponent, 1) << endl;
	
	
	return 0;
}
