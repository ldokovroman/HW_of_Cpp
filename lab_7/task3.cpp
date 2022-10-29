#include <iostream>
#include <tuple>
#include <cmath>
using namespace std;

using Answers = tuple<double, double, int>;

Answers solution_qe(double a, double b, double c) {
    Answers answer;
    double x1, x2;
    int count_answers;
    double d = pow(b, 2) - 4 * a * c;
    if (d >= 0) {
        x1 = (-b - sqrt(d)) / (2 * a);
        x2 = (-b + sqrt(d)) / (2 * a);
        count_answers = d > 0 ? 2 : 1;
    }
    else count_answers = 0;
    return make_tuple(x1, x2, count_answers);
}

int main() {
    double a, b, c;
    cout << "Введите коэффициенты квадратного уравнения:" << endl;
    cin >> a >> b >> c;
    Answers answer = solution_qe(a, b, c);
    switch (get<2>(answer)) {
        case 0:
            cout << "Корней нет";
            break;
        case 1:
            cout << "Один корень = " << get<0>(answer);
            break;
        case 2:
            cout << "Два корня: " << get<0>(answer) << " и " << get<1>(answer);
            break;
    }
    return 0;
}