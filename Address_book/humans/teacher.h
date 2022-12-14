#pragma once
#include <vector>
#include "human.h"

class Teacher : public Human {
public:
    Teacher(string, string, string, string);
    string get_full_data() const;

private:
    string subject;
};
