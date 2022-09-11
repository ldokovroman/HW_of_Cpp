#include <iostream>
using namespace std;

int main() {
    char op;
    cout << "Выбиерите тип автомобиля: ";
    cin >> op;
    switch (op) {
        case 'V':
            cout << "Кондиционер хочу\n";
        case 'S':
            cout << "Радио играть должно\n";
        default:
            cout << "Колёса круглые\n";
            cout << "Мощный двигатель\n";
    }
    return 0;
}

