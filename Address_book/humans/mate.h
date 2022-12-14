#pragma once
#include "human.h"

class Mate : public Human {
public:
    Mate(string, string, string, unsigned);
    string get_full_data() const;

private:
    unsigned age;
};