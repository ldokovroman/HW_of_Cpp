#include <iostream>
using namespace std;

int main() {
    int k, m, s = 0;
    cin >> k >> m;
    for (int i = 1; i <= 100; i++) {
        if ((i > k) && (i < m)) continue;
        s += i;
    }
    cout << "Сумма = " << s;
}

