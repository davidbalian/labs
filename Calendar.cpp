#include "Calendar.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Calendar::Calendar(int year, int firstDay) {
	bool isLeapYear = 0;
	int startDay = firstDay;
	int duration = 0;
	
	string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	string days[7] = {"S", "M", "T", "W", "T", "F", "S"};
	
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
		isLeapYear = 1;
	
	for (int i = 0; i < 12; i++) {
		if (i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11) 
			duration = 31;
		else if (i == 3 || i == 5 || i == 8 || i == 10)
			duration = 30;
		else if (i == 1 && isLeapYear)
			duration = 29;
		else if (i == 1 && !isLeapYear)
			duration = 28;
		
		cout << months[i] << endl;

		printMonth(startDay, duration, days);

	}
}

void Calendar::printMonth(int &startDay, int duration, string daysOfTheWeek[]) {
	int counter = 0;
	int start = startDay;
	
	for (int i = 0; i < 6; i++) {
		cout << left << setw(5) << daysOfTheWeek[i];
	}
	
	cout << endl;
	
	for (int j = 1; j <= duration + start; j++) {
		if (counter == 6) {
			cout << endl;
			counter = 0;
		}
		
		if (j <= start) {
			cout << setw(5) << "";
		} else {
			cout << setw(5) << j - start;
		}
		
		counter++;
		startDay = counter;
	}
	
	cout << endl;
}
