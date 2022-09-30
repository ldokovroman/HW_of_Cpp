#include <iostream>
using namespace std;

int addNumbers(int n) {
    if (n == 1) return 1;
    return n + addNumbers(n - 1);
}

int addNumbers(int a, int b) {
    if (b == a) return a;
    return b + addNumbers(a, b - 1);
}

int main() {
    int n, x, y;
    cin >> n;
    cout << addNumbers(n) << endl;
    cin >> x >> y;
    cout << addNumbers(x, y) << endl;
    return 0;
}