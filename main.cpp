#include <iostream>
#include "GradeBook.hpp"

using namespace std;

int main() {
    GradeBook myGradeBook("CS101 C++ Programming");
    
    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
	cout << "Largest number from 1, 2, and 3 is: " << myGradeBook.maximum(1, 2, 3) << endl;;
    
    return 0;
}
