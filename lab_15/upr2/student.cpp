#include <iostream>
#include "student.h"

Student::Student(string name, string last_name, IdCard * id) {
    set_name(name);
    set_last_name(last_name);
    setIdCard(id);
    set_average_score(0);
}

Student::Student(){}

void Student::set_name(string student_name) {
    name = student_name;
}

std::string Student::get_name() {
    return name;
}

void Student::set_last_name(string student_last_name) {
    last_name = student_last_name;
}

std::string Student::get_last_name() {
    return last_name;
}

void Student::set_scores(int scores[]) {
    for (int i = 0; i < 5; ++i)
        scores[i] = scores[i];
}

void Student::set_average_score(double ball) {
    average_score = ball;
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

void Student::display() const {
    cout << last_name << ' ' << name << ": " << average_score << ' '
         << iCard->getNumber()<< ' ' << iCard->getCategory() << endl;
}

bool operator==(const Student &s1, const Student &s2) {
    return s1.name == s2.name && s1.last_name == s2.last_name;
}

bool operator!=(const Student &s1, const Student &s2) {
    return !(s1.name == s2.name && s1.last_name == s2.last_name);
}

bool operator<(const Student &s1, const Student &s2) {
    if (s1.last_name == s2.last_name)
        return s1.name < s2.name;
    return s1.last_name < s2.last_name;
}

bool operator>(const Student &s1, const Student &s2) {
    return s2 < s1;
}
