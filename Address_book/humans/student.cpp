#include <cmath>
#include "student.h"

Student::Student(string name, string surname, string phone_number, vector <unsigned> scores)
    : Human(name, surname, phone_number) {
    this->scores = scores;
    average_score = get_average_score();
}

double Student::get_average_score() const {
    double sum = 0;
    for (auto score : scores)
        sum += score;
    return sum / scores.size();
}

string Student::get_full_data() const{
    return Human::get_full_data() +
           ", average score is " + to_string(average_score);
}