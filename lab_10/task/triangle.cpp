#include <cmath>
#include "triangle.h"

Triangle::Triangle() {
    a = Dot();
    b = Dot();
    c = Dot();
}

Triangle::Triangle(const Dot &a, const Dot &b, const Dot &c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void Triangle::show_sides() const {
    cout << "Стороны треугольника: "
         << a.distanceTo(b) << ' '
         << b.distanceTo(c) << ' '
         << c.distanceTo(a) << endl;
}

double Triangle::get_perimeter() const {
    return a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a);
}

double Triangle::get_area() const {
    double x = a.distanceTo(b);
    double y = b.distanceTo(c);
    double z = c.distanceTo(a);
    double p = (x + y + z) / 2;
    return sqrt(p * (p - x) * (p - y) * (p - z));
}
