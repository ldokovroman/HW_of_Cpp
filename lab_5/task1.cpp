#include <iostream>
using namespace std;

int summa(int mas[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += mas[i];
    return s;
}

double mean(int mas[], const int n) {
    double m = (double)summa(mas, n) / n;
    return m;
}

int summa_neg(int mas[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        if (mas[i] < 0) s += mas[i];
    return s;
}

int summa_pos(int mas[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        if (mas[i] > 0) s += mas[i];
    return s;
}

int summa_odd_ind(int mas[], const int n) {
    int s = 0;
    for (int i = 1; i < n; i += 2)
        s += mas[i];
    return s;
}

int summa_even_ind(int mas[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i += 2)
        s += mas[i];
    return s;
}

void sorting(int mas[], const int n) {
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = mas[j] < mas[min] ? j : min;
        if (i != min) swap(mas[i], mas[min]);
    }
}

void show(int mas[], const int n) {
    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';
}

int main() {
    const int n = 10;
    int a[n] = {1, -15, 6, -32, 43, 5, 96, -23, -4, 55};
    cout << summa(a, n) << endl;
    cout << mean(a, n) << endl;
    cout << summa_neg(a, n) << endl;
    cout << summa_pos(a, n) << endl;
    cout << summa_even_ind(a, n) << endl;
    cout << summa_odd_ind(a, n) << endl;
    sorting(a, n);
    show(a, n);
    return 0;
}