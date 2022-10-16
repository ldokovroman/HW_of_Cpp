#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream output("/Users/roman/cpp.txt");
    if (!output) {
        cout << "Файл не открывается" << endl;
        return 1;
    }
    const int n = 10;
    int a[n] = {1, 15, 6, 32, 43, 5, 96, 23, 4, 55};
    for (int i = 0; i < n; i++)
        output << a[i] << ' ';
    output << '\n';
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = a[j] < a[min] ? j : min;
        if (i != min) swap(a[i], a[min]);
    }
    for (int i = 0; i < n; i++)
        output << a[i] << ' ';
    output.close();
    return 0;
}