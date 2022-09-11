#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if (x * x + y * y < 9 && y > 0) cout << "Внутри";
    else if (x * x + y * y > 9 || y < 0) cout << "Снаружи";
    else cout << "На границе";
    return 0;
}

