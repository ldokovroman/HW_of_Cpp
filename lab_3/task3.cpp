#include <iostream>
#include <cmath>
using namespace std;

double square(double x) {
    double s = pow(x, 2) * sqrt(3) / 4;
    return s;
}

double square(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

int main() {
    double s = 0;
    char type;
    cout << "Выберите тип треугольника: равносторонний - E, разносторонний - U" << endl;
    cin >> type;
    if (type == 'E') {
        cout << "Введите сторону треугольника:" << endl;
        double x;
        cin >> x;
        s = square(x);
    } else if (type == 'U') {
        cout << "Введите стороны треугольника:" << endl;
        double a, b, c;
        cin >> a >> b >> c;
        s = square(a, b, c);
    } else cout << "Неправильный формат данных";
    if (s) cout << "Площадь треуголника = " << s;
    return 0;
}