#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int x) {
    int i = 2;
    while (i <= sqrt(x) && x % i != 0) {
        i += 1;
    }
    return i > sqrt(x) && x > 1;
}

int main() {
    int n;
    cin >> n;
    if (!is_prime(n)) {
        cout << "Digit isn't prime";
        return 0;
    }
    int k_prime = 2;
    for (int k = 3; k < n; k += 2) {
        if (is_prime(k)) k_prime += 1;
    }
    if (is_prime(k_prime) && n > 2) cout << "Digit is super prime";
    else cout << "Digit isn't super prime";
    return 0;
}