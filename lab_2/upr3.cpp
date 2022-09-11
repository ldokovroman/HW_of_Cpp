#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int a, b, c, k = 0, n = 10;
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        if (a * b != c) {
            k++;
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    cout << "Count error: " << k;
}

