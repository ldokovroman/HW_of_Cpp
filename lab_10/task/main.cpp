#include "triangle.h"

int main() {
    double x, y;
    cout << "Введите координаты 1 точки:" << endl;
    cin >> x >> y;
    Dot a(x, y);
    cout << "Введите координаты 2 точки:" << endl;
    cin >> x >> y;
    Dot b(x, y);
    cout << "Введите координаты 3 точки:" << endl;
    cin >> x >> y;
    Dot c(x, y);
    Triangle triangle(a, b, c);
    triangle.show_sides();
    cout << "Периметр = " << triangle.get_perimeter() << endl;
    cout << "Площадь = " << triangle.get_area() << endl;
    return 0;
}
