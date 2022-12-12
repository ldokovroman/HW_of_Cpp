#pragma once
#include "student.h"
#include <string>
#include <set>
#include <algorithm>
using namespace std;

class Group {
public:
    Group(string);
    Group();
    void setName(string);
    string getName();
    int getSize();
    void addStudent(Student *);
    void delStudent(Student *);
    Student * findStudent(string, string);
    void GroupOut();

private:
    string name;
    multiset <Student *, CompareStudent> masSt;
    multiset <Student *, CompareStudent>::iterator iter;
};
