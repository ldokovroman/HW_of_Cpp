#include <iostream>
using namespace std;

bool input(int &a, int &b) {
    cin >> a >> b;
    return a > 0 && b > 0;
}

int main() {
    int a, b;
    if (!input(a, b)) {
        cerr << "error";
        return 1;
    }
    cout << a + b;
    return 0;
}