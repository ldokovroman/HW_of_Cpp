#include "human.h"

Human::Human(string name, string surname, string phone_number) {
    this->name = name;
    this->surname = surname;
    this->phone_number = phone_number;
}

string Human::get_full_data() const {
    return name + ' ' + surname + ": " + phone_number;
}

string Human::get_phone_number() const {
    return phone_number;
}

bool operator<(const Human &lh, const Human &rh) {
    if (lh.surname == rh.surname)
        return lh.name < rh.name;
    return lh.surname < rh.surname;
}

bool operator==(const Human &lh, const Human &rh) {
    return lh.name == rh.name && lh.surname == rh.surname;
}