#include <iostream>
using namespace std;

int * max_vect(int a[], int b[], int n) {
    int * res = new int[n];
    for (int i = 0; i < n; i++)
        res[i] = max(a[i], b[i]);
    return res;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 2};
    int b[] = {7, 6, 5, 4, 3, 2, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int * c = max_vect(a, b, n);
    for (int i = 0; i < n; i++)
        cout << c[i] << ' ';
    delete [] c;
    return 0;
}