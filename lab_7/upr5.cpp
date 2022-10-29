#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

using Tuple = tuple <string, int, double>;

void printTupleOfThree(Tuple t) {
    cout << '('
         << get<0>(t) << ", "
         << get<1>(t) << ", "
         << get<2>(t) << ")" << endl;
}

Tuple funtup(string s, int a, double d) {
    s.append("!");
    return make_tuple(s, a, d * 10);
}

void changeTuple(Tuple &t) {
    cout << "Введите 1 элмент кортежа (string): ";
    cin >> get<0>(t);
    cout << "Введите 2 элмент кортежа (int): ";
    cin >> get<1>(t);
    cout << "Введите 3 элмент кортежа (double): ";
    cin >> get<2>(t);
}

int main() {
    vector <string> v1{"one", "two", "three", "four", "five", "six"};
    vector <int> v2 = {1, 2, 3, 4, 5, 6};
    vector <double> v3 = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    Tuple t1 = make_tuple(v1[0], v2[0], v3[0]);
    Tuple t2 = funtup(v1[1], v2[1], v3[1]);
    Tuple t3;
    changeTuple(t3);
    printTupleOfThree(t1);
    printTupleOfThree(t2);
    printTupleOfThree(t3);
    return 0;
}