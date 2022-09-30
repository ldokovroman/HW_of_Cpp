#include <iostream>
using namespace std;

bool check(char c) {
    return '0' <= c && c <= '9';
}

int main() {
    int x, s = 0;
    char c, last1 = '\0', last2 = '\0';
    for (int i = 9; i >= 1; i--) {
        cin >> c;
        if (!check(c) || c == last1 && c == last2) {
            cout << "False";
            return 0;
        }
        s += (c - '0') * i;
        last2 = last1;
        last1 = c;
    }
    s %= 101;
    cin >> x;
    if (s < 100) cout << (x == s ? "True" : "False");
    else cout << (x == 0 ? "True" : "False");
    return 0;
}