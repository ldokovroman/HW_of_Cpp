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
    cout << "Введите 2 целых числа:\n";
    int num1, num2;
    cin >> num1 >> num2;
    try {
        float res = quotient(num1, num2);
        cout << num1 << " / " << num2 << " = " << res;
    }
    catch (DivideByZeroError &error) {
        cerr << "Ошибка: ";
        error.printMessage();
        return 1;
    }
    return 0;
}
