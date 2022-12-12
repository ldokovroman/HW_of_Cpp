#include "grades.h"
#include <iostream>

unsigned Grades::size() const {
    return grades.size();
}

void Grades::addGrade(StudentGrade grade) {
    grades[grade.name] = grade;
}

void Grades::delGrade(string name) {
    grades.erase(name);
}

void Grades::showGrades() const {
    for (const auto &item : grades)
        cout << item.first << ' ' << item.second.grade << endl;
    cout << endl;
}