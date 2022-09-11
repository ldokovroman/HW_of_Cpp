#include <iostream>
using namespace std;

int main() {
    int s, n1, n2, n5, n10;
    cin >> s;
    n10 = s / 10;
    s = s % 10;
    n5 = s / 5;
    s = s % 5;
    n2 = s / 2;
    s = s % 2;
    n1 = s;
    cout << "10 рублёвых монет: " << n10 << endl;
    cout << "5 рублёвых монет: " << n5 << endl;
    cout << "2 рублёвых монет: " << n2 << endl;
    cout << "1 рублёвых монет: " << n1;
    return 0;
}