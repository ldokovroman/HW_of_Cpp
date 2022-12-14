#pragma once
#include <string>
using namespace std;

class Human {
public:
    Human(string, string, string);
    virtual ~Human() {}
    virtual string get_full_data() const;
    string get_phone_number() const;
    friend bool operator<(const Human &, const Human &);
    friend bool operator==(const Human &, const Human &);

private:
    string name;
    string surname;
    string phone_number;
};

struct Compare_humans {
    bool operator()(const Human * lh, const Human * rh) const {
        return *lh < *rh;
    }
};