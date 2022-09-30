#include <iostream>
using namespace std;

int to2(int x) {
    if (x < 2) return x;
    return x % 2 + to2(x / 2) * 10;
}

int main() {
    int x;
    cin >> x;
    cout << to2(x);
    return 0;
}