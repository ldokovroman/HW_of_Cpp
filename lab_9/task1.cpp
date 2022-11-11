#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    Triangle(double x, double y, double z) {
        if (x >= y + z || y >= x + z || z >= x + y)
            throw "Одна сторона больше суммы двух остальных";
        a = x;
        b = y;
        c = z;
    }

    double square() const {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }

private:
    double a;
    double b;
    double c;
};

int main() {
    double a, b, c;
    cout << "Введите 3 стороны треугольника:" << endl;
    cin >> a >> b >> c;
    try {
        Triangle t(a, b, c);
        cout << "Площадь треугольника = " << t.square();
    }
   catch (const char * message) {
       cout << message;
   }
   return 0;
}
