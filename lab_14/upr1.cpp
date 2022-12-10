#include <iostream>
using namespace std;

template<class T>
void sorting(T arr[], int size) {
    int j;
    for (int i = 0; i < size; ++i) {
        T x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; --j)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}

template<class T>
void show(T mas[], int n) {
    for (int i = 0; i < n; ++i)
        cout << mas[i] << ' ';
    cout << endl;
}

int main() {
    int arr[] = {9, 3, 17, 6, 5, 4, 31, 2, 12};
    double arrd[] = {2.1, 2,3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2};
    char arrc[] = "Hello, word";
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arrd) / sizeof(arrd[0]);
    int n3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    sorting(arr, n1);
    show(arr, n1);
    sorting(arrd, n2);
    show(arrd, n2);
    sorting(arrc, n3);
    show(arrc, n3);
    return 0;
}
