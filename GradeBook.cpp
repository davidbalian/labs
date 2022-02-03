#include <iostream>
#include <iomanip>
#include "GradeBook.hpp"

using namespace std;

GradeBook::GradeBook(string name) {
    setCourseName(name);
}

void GradeBook::setCourseName(string name) {
    if (name.length() <= 25)
        courseName = name;
    else {
        courseName = name.substr(0, 25);
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
        << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName() {
    return courseName;
}

void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for \n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage() {
    int total;
    int gradeCounter;
    int grade;
    double average;
    
    total = 0;
    gradeCounter = 0;
    
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
    
    while (grade != -1) {
        total += grade;
        gradeCounter++;
        
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
    
    if (gradeCounter != 0) {
        average = static_cast<double>(total)/gradeCounter;
        
        cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
        cout << "Class average is " << fixed << setprecision(2) << average << endl;
    }
    else {
        cout << "No grades were entered" << endl;
    }
}

int GradeBook::maximum(int a, int b, int c) {	
	int largest = 0;
	
	if (a > b && a > c) {
		largest = a;
	} else if (b > a && b > c) {
		largest = b;
	} else if (c > a && c > b) {
		largest = c;
	}
	
	return largest;
}
