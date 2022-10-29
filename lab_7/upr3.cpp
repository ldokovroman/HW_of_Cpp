#include <iostream>
using namespace std;

struct Distance {
    int feet;
    double inches;
    void ShowDist() {
        cout << feet << "\'-" << inches << "\"\n";
    }
};

Distance SumDist(Distance masDist[], int n) {
    Distance d = {0, 0};
    for (int i = 0; i < n; i++) {
        d.feet += masDist[i].feet;
        d.inches += masDist[i].inches;
    }
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
    int n;
    cout << "Введите размер массива расстояний: ";
    cin >> n;
    Distance * masDist = new Distance[n];
    for (int i = 0; i < n; i++)
        masDist[i] = InputDist();
    for (int i = 0; i < n; i++)
        masDist[i].ShowDist();
    SumDist(masDist, n).ShowDist();
    delete [] masDist;
    return 0;
}