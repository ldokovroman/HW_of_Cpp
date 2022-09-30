#include <iostream>
#include <string>
using namespace std;

string privet(string name) {
    string str = name + ", hello!\n";
    return str;
}

int main() {
    string name, nameOut;
    cout << "What is your name?" << endl;
    cin >> name;
    nameOut = privet(name);
    cout << nameOut;
    return 0;
}