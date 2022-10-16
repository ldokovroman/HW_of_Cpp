#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream output("/Users/roman/cpp.txt", ios::out);
    if (!output) {
        cout << "Файл не открывается" << endl;
        return 1;
    }
    string s;
    while (getline(cin, s) && s != "")
        output << s << '\n';
    output.close();
    return 0;
}