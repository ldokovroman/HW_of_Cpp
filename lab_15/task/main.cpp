#include "grades.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Grades grades;
    grades.addGrade({"Roma", 'A'});
    grades.addGrade({"Vova", 'B'});
    grades.addGrade({"Zhenya", 'C'});
    grades.addGrade({"Masha", 'D'});
    cout << grades.size() << endl;
    grades.showGrades();
    grades.delGrade("Zhenya");
    cout << grades.size() << endl;
    grades.showGrades();
	return 0;
}