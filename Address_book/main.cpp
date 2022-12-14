#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include "address_book.h"
#include "humans/student.h"
#include "humans/teacher.h"
#include "humans/mate.h"

using namespace std;
using Tuple = tuple <string, string, string>;

Tuple get_data() {
    string name, surname, phone_number;
    cout << "Введите имя, фамилию и номер телефона:" << endl;
    cin >> name >> surname >> phone_number;
    Tuple t = make_tuple(name, surname, phone_number);
    return t;
}

int main() {
    Address_book * address_book = Address_book::get_book();
    unsigned n;
    cout << "Введите количество человек: ";
    cin >> n;
    Human * humans[n];
    Tuple data;
    char choice;
    unsigned k = 0;
    while (k < n) {
        cout << "Кого хотите записать?" << endl;
        cout << "H - human, S - student, T - teacher, M - mate" << endl;
        cin >> choice;
        switch (choice) {
            case 'H':
                data = get_data();
                humans[k] = new Human(get<0>(data), get<1>(data), get<2>(data));
                address_book->add_human(humans[k++]);
                break;
            case 'S': {
                data = get_data();
                unsigned size, score;
                vector <unsigned> scores;
                cout << "Введите количество оценок: ";
                cin >> size;
                cout << "Вводите оценки:" << endl;
                for (unsigned i = 0; i < size; ++i) {
                    cin >> score;
                    scores.push_back(score);
                }
                humans[k] = new Student(get<0>(data), get<1>(data), get<2>(data), scores);
                address_book->add_human(humans[k++]);
                break;
            }
            case 'T': {
                data = get_data();
                string subject;
                cout << "Введите предмет:" << endl;
                cin >> subject;
                humans[k] = new Teacher(get<0>(data), get<1>(data), get<2>(data), subject);
                address_book->add_human(humans[k++]);
                break;
            }
            case 'M': {
                data = get_data();
                unsigned age;
                cout << "Введите возраст: ";
                cin >> age;
                humans[k] = new Mate(get<0>(data), get<1>(data), get<2>(data), age);
                address_book->add_human(humans[k++]);
                break;
            }
            default:
                cout << "Wrong option" << endl;
        }
    }
    delete address_book;
    for (int i = 0; i < n; ++i)
        delete humans[i];
    return 0;
}
