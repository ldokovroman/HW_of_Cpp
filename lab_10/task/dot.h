#pragma once

class Dot {
public:
    Dot();
    Dot(double, double);
    double distanceTo (Dot) const;

private:
    double x;
    double y;
};
