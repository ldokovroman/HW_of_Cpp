#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int a, b, c, k = 0;
    const int n = 10;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;
        if (a * b != c) {
            k++;
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << "\nCount error: " << k;
    return 0;
}