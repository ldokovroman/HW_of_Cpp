#include <iostream>
#include <cstdio>
using namespace std;

class Time {
public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(unsigned hh, unsigned mm, unsigned ss) {
        hours = hh;
        minutes = mm;
        seconds = ss;
        make_out_seconds();
    }

    void show() const {
        printf("%02u:%02u:%02u\n", hours, minutes, seconds);
    }

    unsigned count_seconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    bool operator>=(const Time &time) const {
        return this->count_seconds() >= time.count_seconds();
    }

    Time operator+(const Time &time) const {
        Time res;
        res.seconds = this->count_seconds() + time.count_seconds();
        res.make_out_seconds();
        return res;
    }

    Time operator+(unsigned ss) const {
        Time res;
        res.seconds = this->count_seconds() + ss;
        res.make_out_seconds();
        return res;
    }

    Time operator-(const Time &time) const {
        Time res;
        if (*this >= time) {
            res.seconds = this->count_seconds() - time.count_seconds();
            res.make_out_seconds();
        } else cout << "Время < 0\n";
        return res;
    }

private:
    void make_out_seconds() {
        hours += seconds / 3600;
        seconds %= 3600;
        minutes += seconds / 60;
        seconds %= 60;
    }

    unsigned hours;
    unsigned minutes;
    unsigned seconds;
};

Time operator+(unsigned ss, const Time &time) {
    return time + ss;
}

int main() {
    unsigned hh, mm, ss;
    cout << "Введите 1 время в формате \"hh mm ss\":" << endl;
    cin >> hh >> mm >> ss;
    Time time1(hh, mm, ss);
    cout << "Введите 2 время в формате \"hh mm ss\":" << endl;
    cin >> hh >> mm >> ss;
    const Time time2(hh, mm, ss);
    (time2 - time1).show();
    (time1 + time2).show();
    (time1 + 60).show();
    (3600 + time2).show();
    return 0;
}
