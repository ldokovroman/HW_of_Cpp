#pragma once
#include "human.h"

class Teacher : Human {
public:
    Teacher(string last_name, string name, string second_name, unsigned work_time)
        : Human(last_name, name, second_name) {
        this->work_time = work_time;
    }

    unsigned get_work_time() const {
        return work_time;
    }

    void get_full_data() const {
        Human::get_full_data();
        cout << "Рабочее время: " << get_work_time() << endl;
    }

private:
    unsigned work_time;
};