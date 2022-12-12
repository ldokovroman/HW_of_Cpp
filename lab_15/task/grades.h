#pragma once
#include <string>
#include <map>
using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

class Grades {
public:
    unsigned size() const;
    void addGrade(StudentGrade grade);
    void delGrade(string name);
    void showGrades() const;

private:
    map <string, StudentGrade> grades;
};