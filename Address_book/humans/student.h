#pragma once
#include <vector>
#include "human.h"

class Student : public Human {
public:
    Student(string, string, string, vector <unsigned>);
    double get_average_score() const;
    string get_full_data() const;

private:
    vector <unsigned> scores;
    double average_score;
};
