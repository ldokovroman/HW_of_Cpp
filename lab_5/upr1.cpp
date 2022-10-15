#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
        s += mas[i];
    cout << "Сумма массива = " << s << endl;
    double m = (double)s / n;
    cout << "Среднее значение элементов массива = " << m;
    return 0;
}