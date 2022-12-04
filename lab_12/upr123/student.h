#pragma once
#include "human.h"
#include <vector>

class Student : public Human {
public:
    Student(string last_name, string name, string second_name, vector <int> scores)
        : Human(last_name, name, second_name) {
        this->scores = scores;
    }

    float get_average_score() const {
        unsigned count_scores = scores.size();
        unsigned sum_scores = 0;
        for (unsigned i = 0; i < count_scores; ++i)
            sum_scores += scores[i];
        float average_score = (float)sum_scores / count_scores;
        return average_score;
    }

private:
    vector <int> scores;
};
