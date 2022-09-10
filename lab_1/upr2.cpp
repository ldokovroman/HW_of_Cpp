#include <iostream>
using namespace std;

int main() {
    double a, b, x;
    cout << "Введите a и b:\n";
    cin >> a >> b;
    x = a / b;
    int y = a / b;
    cout << "x = " << x << endl;
    cout.precision(3);                // количество значащих цифр
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << sizeof(x) << " " << sizeof(y) << endl;    // размер в байтах
    return 0;
}

