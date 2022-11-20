#include <iostream>
#include "student.h"

int main() {
    string name;
    string last_name;
    cout << "Name: ";
    getline(cin, name);
    cout << "Last name: ";
    getline(cin, last_name);
    IdCard idc(123, "Базовый");
    Student * student = new Student(name, last_name, &idc);
    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    student->set_scores(scores);
    double average_score = sum / 5.0;
    student->set_average_score(average_score);
    cout << "Average score for " << student->get_name() << " "
         << student->get_last_name() << " is "
         << student->get_average_score() << endl;
    cout << "IdCard: " << student->getIdCard().getNumber() << endl;
    cout << "Category: " << student->getIdCard().getCategory() << endl;
    delete student;
    return 0;
}
