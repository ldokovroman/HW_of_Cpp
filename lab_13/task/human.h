#pragma once
#include <string>
using namespace std;

class Human {
public:
    Human(string last_name, string name, string second_name) {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }

    virtual void get_full_data() const {
        cout << this->last_name << ' '
             << this->name << ' '
             << this->second_name << endl;
    }

private:
    string last_name;
    string name;
    string second_name;
};
