#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, p, a, s;
    cin >> P;
    p = 0.5 * P;
    a = P / 3;
    s = sqrt(p * pow(p - a, 3));
    cout << "Сторона = " << round(a * 100) / 100 << endl;
    cout << "Площаль = " << round(s * 100) / 100 << endl;
    return 0;
}

