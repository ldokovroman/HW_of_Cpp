#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

class GradeMap {
public:
    GradeMap () {}
    char &operator[](const string &name) {
        for (auto &ref : m_map)
            if (ref.name == name)
                return ref.grade;
        StudentGrade tmp = {name, ' '};
        m_map.push_back(tmp);
        return m_map.back().grade;
    }

private:
    vector <StudentGrade> m_map;
};

int main() {
    GradeMap grades;
    grades["John"] = 'A';
    grades["Mratin"] = 'B';
    cout << "John's grade is " << grades["John"] << endl;
    cout << "Mratin's grade is " << grades["Mratin"] << endl;
    cout << "New name and grade?" << endl;
    string name;
    char grade;
    cin >> name >> grade;
    grades[name] = grade;
    cout << name << "\'s grade is " << grades[name] << endl;
    return 0;
}
