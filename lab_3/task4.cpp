#include <iostream>
using namespace std;

int summa(int n) {
    if (n == 1) return 5;
    return 5 * n + summa(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << summa(n);
    return 0;
}