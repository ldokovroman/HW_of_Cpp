#include <iostream>
#include <cmath>
using namespace std;

struct Answers {
    double x1;
    double x2;
    int count_answers;
};

Answers solution_qe(double a, double b, double c) {
    Answers answer;
    double d = pow(b, 2) - 4 * a * c;
    if (d >= 0) {
        answer.x1 = (-b - sqrt(d)) / (2 * a);
        answer.x2 = (-b + sqrt(d)) / (2 * a);
        answer.count_answers = d > 0 ? 2 : 1;
    }
    else answer.count_answers = 0;
    return answer;
}

int main() {
    double a, b, c;
    cout << "Введите коэффициенты квадратного уравнения:" << endl;
    cin >> a >> b >> c;
    Answers answer = solution_qe(a, b, c);
    switch (answer.count_answers) {
        case 0:
            cout << "Корней нет";
            break;
        case 1:
            cout << "Один корень = " << answer.x1;
            break;
        case 2:
            cout << "Два корня: " << answer.x1 << " и " << answer.x2;
            break;
    }
    return 0;
}