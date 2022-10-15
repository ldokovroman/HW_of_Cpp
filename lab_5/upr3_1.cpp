#include <iostream>
using namespace std;

void show_array(const int mas[], const int n) {
    for (int i = 0; i < n; i++)
        cout << mas[i] << ' ';
    cout << endl;
}

bool from_min(const int a, const int b) {
    return a > b;
}

bool from_max(const int a, const int b) {
    return a < b;
}

void bubble_sort(int mas[], const int n, bool (*compare)(int a, int b)) {
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if ((*compare)(mas[j], mas[j + 1])) swap(mas[j], mas[j + 1]);
}

int main() {
    const int n = 10;
    int my_choose;
    int a[n] = {9, 8, 7, 6, 1, 2, 3, 5, 4, 9};
    cout << "Выберите сортировку: 1 - по возрастанию, 2 - по убыванию: ";
    cin >> my_choose;
    switch (my_choose) {
        case 1:
            bubble_sort(a, n, from_min);
            break;
        case 2:
            bubble_sort(a, n, from_max);
            break;
        default:
            cout << "Неизвестная операция" << endl;
    }
    show_array(a, n);
    return 0;
}