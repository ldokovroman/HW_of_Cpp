#include <iostream>
using namespace std;

class Distance {
public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F) {}
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
    Distance(float meters) :  MTF(3.280833F) {
        float fltfeet = MTF * meters;
        feet = (int)fltfeet;
        inches = 12 * (fltfeet - feet);
    }

    operator float() const {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }

private:
    int feet;
    float inches;
    const float MTF;
};

int main() {
    Distance dist = 2.25F;
    float mtrs1 = static_cast<float>(dist);
    float mtrs2 = dist;
    cout << mtrs1 << ' ' << mtrs2;
    return 0;
}
