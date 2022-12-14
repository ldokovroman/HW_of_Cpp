#include "mate.h"

Mate::Mate(string name, string surname, string phone_number, unsigned age)
        : Human(name, surname, phone_number) {
    this->age = age;
}

string Mate::get_full_data() const{
    return Human::get_full_data() + ", " +
           to_string(age) + " years old";
}
