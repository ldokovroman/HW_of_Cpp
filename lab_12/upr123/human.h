#pragma once
#include <string>
#include <sstream>
using namespace std;

class Human {
public:
    Human(string last_name, string name, string second_name) {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }

    string get_full_name() const {
        ostringstream full_name;
        full_name << this->last_name << ' '
                  << this->name << ' '
                  << this->second_name;
        return full_name.str();
    }

private:
    string last_name;
    string name;
    string second_name;
};