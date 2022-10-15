#include <iostream>
using namespace std;

int transpos(int mas[], const int n, int a) {
    int i = 0;
    while (mas[i] != a && i < n)
        i++;
    if (i == 0) return 0;
    if (i < n) {
        swap(mas[i], mas[i - 1]);
        return i - 1;
    }
    return -1;
}

void show(int mas[], const int n) {
    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << endl;
}

int main() {
    const int n = 10;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    transpos(a, n, 5);
    show(a, n);
    transpos(a, n, 5);
    show(a, n);
    transpos(a, n, 7);
    show(a, n);
    transpos(a, n, 1);
    show(a, n);
    transpos(a, n, 2);
    show(a, n);
    return 0;
}