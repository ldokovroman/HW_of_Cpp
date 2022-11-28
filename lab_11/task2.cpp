#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Point {
public:
    Point() : x(0), y(0) {}
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    double get_dist() const {
        return sqrt(x * x + y * y);
    }

    bool operator<(const Point &p) const {
        return get_dist() < p.get_dist();
    }

    friend ostream &operator<<(ostream &out, const Point &p) {
        out << p.x << ' ' << p.y << '\n';
        return out;
    }

private:
    double x;
    double y;
};

int main() {
    vector <Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    sort(v.begin(), v.end());
    for (auto &point : v)
        cout << point;
    return 0;
}
