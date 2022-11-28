#include <iostream>
using namespace std;

class Distance {
public:
    Distance() : feet(0), inches(0.0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}
    void getdist() {
        cout << "Введите число футов: ";
        cin >> feet;
        cout << "Введите число дюймов: ";
        cin >> inches;
    }

    Distance operator+(const Distance &d) const {
        Distance new_d;
        new_d.feet = feet + d.feet;
        new_d.inches = inches + d.inches;
        new_d.feet += (int)new_d.inches / 12;
        new_d.inches -= (int)new_d.inches / 12 * 12;
        return new_d;
    }

    Distance operator-(const Distance &d) const {
        Distance new_d;
        if (feet > d.feet || (feet == d.feet && inches >= d.inches)) {
            new_d.inches = 12 * (feet - d.feet) + inches - d.inches;
            new_d.feet = (int)new_d.inches / 12;
            new_d.inches -= (int)new_d.inches / 12 * 12;
        } else cout << "Расстояние < 0\n";
        return new_d;
    }

    friend ostream &operator<<(ostream &out, const Distance &d) {
        out << d.feet << "\'-" << d.inches << "\"\n";
        return out;
    }

private:
    int feet;
    float inches;
};

int main() {
    Distance d1, d2, d3, d4, d5;
    d1.getdist();
    d2.getdist();
    d3 = d1 + d2;
    cout << "d3 = " << d1;
    d4 = d1 + d2 + d3;
    cout << "d4 = " << d4;
    d5 = d1 - d2;
    cout << "d5 = " << d5;
    return 0;
}
