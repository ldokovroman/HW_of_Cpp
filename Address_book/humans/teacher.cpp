#include "teacher.h"

Teacher::Teacher(string name, string surname, string phone_number, string subject)
        : Human(name, surname, phone_number) {
    this->subject = subject;
}

string Teacher::get_full_data() const{
    return Human::get_full_data() +
           ", teacher of " + subject;
}
