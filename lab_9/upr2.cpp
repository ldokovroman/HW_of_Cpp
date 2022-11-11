#include <iostream>
#include <string>
using namespace std;

class DivideByZeroError {
public:
    DivideByZeroError() : message("деление на ноль") {}
    void printMessage() const {
        cout << message << endl;
    }
private:
    string message;
};

float quotient(int num1, int num2) {
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)num1 / num2;
}

int main() {
    cout << "Введите числитель: ";
    int num;
    cin >> num;
    for (short i = -10; i <= 10; i++) {
        try {
            float res = quotient(num, i);
            cout << num << " / " << i << " = " << res << endl;
        }
        catch (DivideByZeroError &error) {
            cout << "Ошибка: ";
            error.printMessage();
        }
    }
    return 0;
}
