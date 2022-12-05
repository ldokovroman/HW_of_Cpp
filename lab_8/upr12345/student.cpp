#include <fstream>
#include "student.h"

Student::Student(string name, string last_name) {
    set_name(name);
    set_last_name(last_name);
}

Student::~Student() {
    save();
}

void Student::set_name(string student_name) {
    name = student_name;
}

string Student::get_name() {
    return name;
}

void Student::set_last_name(string student_last_name) {
    last_name = student_last_name;
}

string Student::get_last_name() {
    return last_name;
}

void Student::set_scores(int student_scores[]) {
    for (int i = 0; i < 5; i++)
        scores[i] = student_scores[i];
}

void Student::set_average_score(double score) {
    average_score = score;
}

double Student::get_average_score() {
    return average_score;
}

void Student::save() {
    ofstream output("student.txt", ios::app);
    output << get_name() << " "
           << get_last_name() << " ";
    for (int i = 0; i < 5; i++)
        output << scores[i] << " ";
    output << endl;
    output.close();
}