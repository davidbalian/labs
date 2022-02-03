#include <string>

using namespace std;

class GradeBook {
    public:
        GradeBook(string);
        void setCourseName(string);
        string getCourseName();
        void displayMessage();
        void determineClassAverage();
		int maximum(int, int, int);
    private:
        string courseName;
};
