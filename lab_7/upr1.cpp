#include <iostream>
using namespace std;

struct Distance {
    int feet;
    double inches;
    void ShowDist() {
        cout << feet << "\'-" << inches << "\"\n";
    }
};

Distance AddDist(Distance d1, Distance d2) {
    Distance d;
    d.feet = d1.feet + d2.feet;
    d.inches = d1.inches + d2.inches;
    d.feet += (int)d.inches / 12;
    d.inches -= (int)d.inches / 12 * 12;
    return d;
}

Distance InputDist() {
    Distance d;
    cout << "\nВведитие число футов: ";
    cin >> d.feet;
    cout << "Введитие число дюймов: ";
    cin >> d.inches;
    return d;
}

int main() {
    Distance d1 = InputDist();
    Distance d2 = {1, 6.25};
    Distance d3 = AddDist(d1, d2);
    d3.ShowDist();
    return 0;
}