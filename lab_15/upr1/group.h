#pragma once
#include "student.h"
#include <string>
#include <list>
#include <algorithm>
using namespace std;

class Group {
public:
    Group(string);
    Group();
    void setName(string);
    string getName();
    int getSize();
    void addStudent(Student);
    void delStudent(Student);
    Student findStudent(string, string);
    void GroupSort();
    void GroupOut();

private:
    string name;
    list <Student> masSt;
    list <Student>::iterator iter;
};
