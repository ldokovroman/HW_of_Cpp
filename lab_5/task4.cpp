#include <iostream>
#include <cstring>
using namespace std;

int main(const int argc, const char * argv[]) {
    if (argc != 4)
        cout << "Неверное количество входных данных";
    else if (strncmp(argv[1], "-a", 2) == 0)
        cout << atoi(argv[2]) + atoi(argv[3]);
    else if (strncmp(argv[1], "-m", 2) == 0)
        cout << atoi(argv[2]) * atoi(argv[3]);
    else cout << "Неправильная операция";
    return 0;
}