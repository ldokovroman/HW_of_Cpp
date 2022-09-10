#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, s;
    cout << "Введите x1 и y1: ";
    cin >> x1 >> y1;
    cout << "Введите x2 и y2: ";
    cin >> x2 >> y2;
    cout << "Введите x3 и y3: ";
    cin >> x3 >> y3;
    cout << "Введите x4 и y4: ";
    cin >> x4 >> y4;
    cout << "Введите x5 и y5: ";
    cin >> x5 >> y5;
    s = 0.5 * abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - (x2 * y1 + x3 * y2 + x4 * y3 + x5 * y4 + x1 * y5));
    cout << "Площать пятиугольника = " << s;
    return 0;
}

