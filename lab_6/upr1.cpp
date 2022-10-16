#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double sum = 0;
    const int n = 100;
    double nums[n];
    for (int i = 0; i < n; i++)
        nums[i] = rand() % 100;

    ofstream output("/Users/roman/cpp.txt", ios::out | ios::binary);
    if (!output) {
        cout << "Файл не открывается" << endl;
        return 1;
    }
    output.write((char *) nums, sizeof(nums));
    output.close();

    ifstream input("/Users/roman/cpp.txt", ios::in | ios::binary);
    if (!input) {
        cout << "Файл не открывается" << endl;
        return 1;
    }
    input.read((char *) &nums, sizeof(nums));
    output.close();
    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++) {
        sum += nums[i];
        cout << nums[i] << ' ';
    }
    cout << "\nsum = " << sum;
    input.close();
    return 0;
}