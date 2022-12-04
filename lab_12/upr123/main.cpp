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
    Student * student = new Student("Петров", "Иван", "Алексеевич", scores);
    cout << student->get_full_name() << endl;
    cout << "Средий балл: " << student->get_average_score() << endl;
    unsigned teacher_work_time = 40;
    Teacher * teacher = new Teacher("Сергеев", "Дмитрий", "Сергеев", teacher_work_time);
    cout << teacher->get_full_name() << endl;
    cout << "Количество часов: " << teacher->get_work_time() << endl;
    delete student;
    delete teacher;
    return 0;
}
