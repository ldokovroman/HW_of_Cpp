#include <iostream>
using namespace std;

int main() {
    int n = 0, s = 0;
    double x, y, r, p;
    while (s < 50 && n < 20) {
        cout << "Делайте выстрел: ";
        cin >> x >> y;
        n += 1;
        r = x * x + y * y;
        if (r <= 1) s += 10;
        else if (r <= 4) s += 5;
        else if (r <= 9) s += 1;
    }
    cout << "Сумма очков = " << s << endl;
    cout << "Количество попыток = " << n << endl;
    cout << "Ваш уровень: ";
    p = s / n;
    if (p > 7) cout << "снайпер";
    else if (p >= 5) cout << "хороший стрелок";
    else cout << "новчиок";
}