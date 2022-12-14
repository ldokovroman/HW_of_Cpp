#pragma once
#include <set>
#include "humans/human.h"

class Address_book {
public:
    static Address_book * get_book();
    ~Address_book();
    void add_human(const Human *);
    void del_human(const Human *);
    const Human * find_human(string, string) const;
    const Human * find_human(string) const;
    void save() const;

private:
    Address_book() {}
    Address_book(const Address_book &) {}
    Address_book &operator=(const Address_book &) {
        return *this;
    }
    multiset <const Human *, Compare_humans> humans;

};