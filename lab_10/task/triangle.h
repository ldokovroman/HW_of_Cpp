#pragma once
#include <iostream>
#include "dot.h"
using namespace std;

class Triangle {
public:
    Triangle();
    Triangle(const Dot &, const Dot &, const Dot &);
    void show_sides() const;
    double get_perimeter() const;
    double get_area() const;

private:
    Dot a;
    Dot b;
    Dot c;
};