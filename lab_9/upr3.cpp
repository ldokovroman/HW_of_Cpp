#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    class ExScore {
    public:
        string origin;
        int iValue;

        ExScore(string org, int sc) {
            origin = org;
            iValue = sc;
        }
    };

    Student(string name, string last_name) {
        set_name(name);
        set_last_name(last_name);
    }

    void set_name(string student_name) {
        name = student_name;
    }

    string get_name() {
        return name;
    }

    void set_last_name(string student_last_name) {
        last_name = student_last_name;
    }

    string get_last_name() {
        return last_name;
    }

    void set_scores(int student_scores[]) {
        for (int i = 0; i < 5; i++) {
            if (student_scores[i] > 5 || student_scores[i] < 1)
                throw ExScore("В функции set_scores()", student_scores[i]);
            scores[i] = student_scores[i];
        }
    }

    void set_average_score(double score) {
        average_score = score;
    }

    double get_average_score() {
        return average_score;
    }

private:
    int scores[5];
    double average_score;
    string name;
    string last_name;
};

int main() {
    string name;
    string last_name;
    cout << "Name: ";
    getline(cin, name);
    cout << "Last name: ";
    getline(cin, last_name);
    Student student(name, last_name);
    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }
    try {
        student.set_scores(scores);
        double average_score = sum / 5.0;
        student.set_average_score(average_score);
        cout << "Average score for " << student.get_name() << " "
             << student.get_last_name() << " is "
             << student.get_average_score() << endl;
    }
    catch (Student::ExScore &ex) {
        cout << "Ощибка инициализации " << ex.origin << endl;
        cout << "Введённое значение оценки " << ex.iValue << " является недопустимым";
    }
    return 0;
}
