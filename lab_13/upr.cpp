#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    virtual void getdata() {
        cout << "Введите заголовок: ";
        cin >> title;
        cout << "Введите цену: ";
        cin >> price;
    }

    virtual void putdata() const {
        cout << "Заголовок: " << title << endl;
        cout << "Цена: " << price << endl;
    }

private:
    string title;
    double price;
};

class PaperBook : public Item {
public:
    void getdata() {
        Item::getdata();
        cout << "Введите число страниц: ";
        cin >> pages;
    }

    void putdata() const {
        Item::putdata();
        cout << "Число страниц: " << pages << endl;
    }

private:
    int pages;
};

class AudioBook : public Item {
public:
    void getdata() {
        Item::getdata();
        cout << "Введите время звучания: ";
        cin >> time;
    }

    void putdata() const {
        Item::putdata();
        cout << "Время звучания: " << time << endl;
    }

private:
    double time;
};

int main() {
    Item * pubarr[10];
    int n = 0;
    char choice;
    do {
        cout << "Вводить данные для книги или звукого файла (P/A)? ";
        cin >> choice;
        if (choice == 'P')
            pubarr[n] = new PaperBook;
        else
            pubarr[n] = new AudioBook;
        pubarr[n++]->getdata();
        cout << "Продолжать (Y/N)? ";
        cin >> choice;
    } while (choice == 'Y');

    for (int i = 0; i < n; ++i)
        pubarr[i]->putdata();
    cout << endl;
    return 0;
}