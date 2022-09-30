#include <iostream>
#include <cmath>
using namespace std;

long double cubert(double a) {
    double x = a;
    while (pow(x, 3) - a > 1e-10) {
        x = (a / pow(x, 2) + 2 * x) / 3;
    }
    return x;
}

int main() {
    double a;
    cin >> a;
    cout << pow(a, 1.0 / 3) << endl;
    cout << cubert(a) << endl;
    return 0;
}