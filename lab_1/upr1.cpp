#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "What is your name? ";
    cin >> name;                             // name
    cout << "Hello, " << name << "!\n";

    cout << "What is your name? ";
    getline(cin >> ws, name);                // surname + name
    cout << "Hello, " << name << "!\n";

    return 0;
}
