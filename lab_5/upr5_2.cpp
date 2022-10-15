#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    int a, b, c, k = 0;
    const int n = 10;
    vector <int> right_answer, wrong_answer;
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        cout << a << " * " << b << " = ";
        cin >> c;
        if (a * b != c) {
            wrong_answer.push_back(c);
            k++;
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        } else right_answer.push_back(c);
    }
    cout << "Right answers: " << endl;
    for (int i = 0; i < right_answer.size(); i++)
        cout << right_answer[i] << ' ';
    cout << "\nWrong answers: " << endl;
    for (int i = 0; i < wrong_answer.size(); i++)
        cout << wrong_answer[i] << ' ';
    cout << "\nCount error: " << k;
    return 0;
}