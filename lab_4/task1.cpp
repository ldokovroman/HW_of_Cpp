#include <iostream>
#include <cmath>
using namespace std;

int roots(double a, double b, double c, double &x1, double &x2) {
    double d = pow(b, 2) - 4 * a * c;
    if (d < 0) return -1;
    x1 = (-b - sqrt(d)) / (2 * a);
    x2 = (-b + sqrt(d)) / (2 * a);
    return (int)(d > 0);
}

int main() {
    double a, b, c, x1, x2;
    cout << "Введите коэффициенты квадратного уравнения:" << endl;
    cin >> a >> b >> c;
    int k = roots(a, b, c, x1, x2);
    switch (k) {
        case -1:
            cout << "Корней нет";
            break;
        case 0:
            cout << "Один корень = " << x1;
            break;
        case 1:
            cout << "Два корня: " << x1 << " и " << x2;
            break;
    }
    return 0;
}