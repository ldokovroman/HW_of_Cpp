#include <iostream>
using namespace std;

template<class T, class T1>
class Array {
public:
    Array(int size);
    T sum();
    T1 average_value();
    void show_array();
    void add_value(T);
    ~Array();

private:
    T * data;
    unsigned size;
    unsigned index;
};

template<class T, class T1>
Array<T, T1>::Array(int size) {
    data = new T[size];
    if (data == NULL) {
        cerr << "Error memory ---- exit program" << std::endl;
        exit(1);
    }
    this->size = size;
    index = 0;
}

template<class T, class T1>
T Array<T, T1>::sum() {
    T sum = 0;
    for (unsigned i = 0; i < index; ++i) {
        sum += data[i];
    }
    return(sum);
}

template<class T, class T1>
T1 Array<T, T1>::average_value() {
    return ((T1)sum() / index);
}

template<class T, class T1>
void Array<T, T1>::show_array() {
    for (unsigned i = 0; i < index; ++i)
        cout << data[i] << ' ';
    cout << endl;
}

template<class T, class T1>
void Array<T, T1>::add_value(T value) {
    if (index < size) {
        data[index] = value;
        ++index;
    }
}

template<class T, class T1>
Array<T, T1>::~Array() {
    delete [] data;
}

int main() {
    Array<int, float> numbers(100);
    Array<float, float> values(200);
    unsigned i;
    for (i = 0; i < 50; ++i)
        numbers.add_value(i);
    numbers.show_array();
    cout << "Sum = " << numbers.sum() << endl;
    cout << "Average = " << numbers.average_value() << endl;
    for (i = 0; i < 50; ++i)
        values.add_value(i / 10.0);
    values.show_array();
    cout << "Sum = " << values.sum() << endl;
    cout << "Average = " << values.average_value() << endl;
    return 0;
}
