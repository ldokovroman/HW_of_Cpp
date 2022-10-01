#include <iostream>
using namespace std;

void swapping(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void swapping(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

int main() {
    int x = 5, y = 10;
    swapping(&x, &y);
    cout << x << ' ' << y << endl;
    swapping(x, y);
    cout << x << ' ' << y << endl;
    return 0;
}