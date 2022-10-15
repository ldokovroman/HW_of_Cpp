#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int a[n] = {1, 15, 6, 32, 43, 5, 96, 23, 4, 55};
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = a[j] < a[min] ? j : min;
        if (i != min) swap(a[i], a[min]);
    }
    for (int i: a)
        cout << i << ' ';
    return 0;
}