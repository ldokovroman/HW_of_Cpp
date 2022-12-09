#include <iostream>
#include "student.h"
#include "teacher.h"

int main() {
    vector <int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    Human * student = new Student("Петров", "Иван", "Алексеевич", scores);
    student->get_full_data();
    unsigned teacher_work_time = 40;
    Human * teacher = new Teacher("Сергеев", "Дмитрий", "Сергеев", teacher_work_time);
    teacher->get_full_data();
    delete student;
    delete teacher;
    return 0;
}