#include <fstream>
#include "address_book.h"

Address_book * Address_book::get_book() {
    static Address_book * AB = new Address_book;
    return AB;
}

Address_book::~Address_book() {
    save();
}

void Address_book::save() const {
    ofstream output("address_book.txt", ios::out);
    for (const auto &human : humans)
        output << human->get_full_data() << endl;
    output.close();
}
void Address_book::add_human(const Human * human) {
    humans.insert(human);
}

void Address_book::del_human(const Human * human) {
    humans.erase(human);
}

const Human * Address_book::find_human(string name, string surname) const {
    Human * human = new Human(name, surname, "");
    multiset <const Human *, Compare_humans>::iterator iter = humans.lower_bound(human);
    delete human;
    return *iter;
}

const Human * Address_book::find_human(string phone_number) const {
    for (auto human : humans) {
        if (human->get_phone_number() == phone_number)
            return human;
    }
    return 0;
}