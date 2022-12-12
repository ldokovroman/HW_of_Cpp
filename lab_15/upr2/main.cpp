#include <iostream>
#include <string>
#include "student.h"
#include "group.h"
using namespace std;

int main() {
    string name;
    string last_name;
	IdCard * idc1 = new IdCard(123456, "Базовый");
    IdCard * idc2 = new IdCard(654321, "Базовый");

    cout << "Name: ";
    getline(cin, name);
    cout << "Last name: ";
    getline(cin, last_name);
    Student * student1 = new Student(name, last_name, idc1);
    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    student1->set_scores(scores);
    double average_score = sum / 5.0;
    student1->set_average_score(average_score);
    cout << "Average score for " << student1->get_name() << " "
         << student1->get_last_name() << " is "
         << student1->get_average_score() << endl;
	cout << "IdCard: " << student1->getIdCard().getNumber() << endl;
	cout << "Category: " << student1->getIdCard().getCategory() << endl;

    Student * student2 = new Student("Пётр", "Петров", idc1);
    Student * student3 = new Student("Семён", "Смирнов", idc2);
    Student * student4 = new Student("Саша", "Коен", idc1);
    Student * student5 = new Student("Дмитрий", "Ионов", idc2);
    Group gr("1967");
    gr.addStudent(student1);
    gr.addStudent(student2);
    gr.addStudent(student3);
    gr.addStudent(student4);
    gr.addStudent(student5);
    cout << "В группе " << gr.getName() << ' ' << gr.getSize() << " студентов" << endl;
    gr.GroupOut();
    gr.delStudent(gr.findStudent("Семён", "Смирнов"));
    gr.GroupOut();

	delete student1;
    delete student2;
    delete student3;
    delete student4;
    delete student5;
	return 0;
}