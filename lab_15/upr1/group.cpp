#include "group.h"

Group::Group(string name) {
    this->name = name;
}

Group::Group() {
    name = "Не определено";
}

void Group::setName(string newName) {
    name = newName;
}

string Group::getName() {
    return name;
}

int Group::getSize() {
    return masSt.size();
}

void Group::addStudent(Student newStudent) {
    masSt.push_back(newStudent);
}

void Group::delStudent(Student oldStudent) {
    masSt.remove(oldStudent);
}

Student Group::findStudent(string searchName, string searchLastName) {
    Student temp(searchName, searchLastName);
    iter = find(masSt.begin(), masSt.end(), temp);
    return *iter;
}

void Group::GroupSort() {
    masSt.sort();
}

void Group::GroupOut() {
    iter = masSt.begin();
    while (iter != masSt.end())
        (*iter++).display();
}

