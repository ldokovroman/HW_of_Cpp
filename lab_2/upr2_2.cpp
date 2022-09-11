#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    while (a * b != 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout << "НОД = " << a + b;
}

