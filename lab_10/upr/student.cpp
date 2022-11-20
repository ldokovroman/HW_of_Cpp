#include "student.h"

Student::Student(string name, string last_name, IdCard * id) {
    set_name(name);
    set_last_name(last_name);
    setIdCard(id);
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

void Student::setIdCard(IdCard * card) {
    iCard = card;
}

IdCard Student::getIdCard() {
    return *iCard;
}