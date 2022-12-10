#include <iostream>
using namespace std;

template<class T, class RT>
RT average(const T arr[], unsigned size) {
    RT sum = 0;
    for (unsigned i = 0; i < size; ++i)
        sum += arr[i];
    return sum / size;
}

int main() {
    int ints[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long longs[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double doubles[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    char chars[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    cout << "ints: " << average<int, double>(ints, 10) << endl;
    cout << "longs: " << average<long, double>(longs, 10) << endl;
    cout << "doubles: " << average<double, double>(doubles, 10) << endl;
    cout << "chars: " << (char)average<char, int>(chars, 8) << endl;
    return 0;
}
