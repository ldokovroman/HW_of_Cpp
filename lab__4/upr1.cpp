#include <iostream>
using namespace std;

void fum_value(double k, double x, double y) {
    x += k;
    y += k;
}

void fum_ptr(double k, double *x, double *y) {
    *x += k;
    *y += k;
}

void fum_ref(double k, double &x, double &y) {
    x += k;
    y += k;
}

void print(double x, double y) {
    cout << "x = " << x << "; y = " << y << endl;
}

int main() {
    double k = 2.5;
    double x = 10;
    double y = 10;

    print(x, y);

    fum_value(k, x, y);
    print(x, y);

    fum_ptr(k, &x, &y);
    print(x, y);

    fum_ref(k, x, y);
    print(x, y);

    return 0;
}