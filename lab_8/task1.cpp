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
        printf("%02d:%02d:%02d", hours, minutes, seconds);
    }

    unsigned count_seconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time add_time(const Time &time) const {
        Time res;
        res.seconds = time.count_seconds() + this->count_seconds();
        res.make_out_seconds();
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

int main() {
    unsigned hh, mm, ss;
    cout << "Введите 1 время в формате \"hh mm ss\":" << endl;
    cin >> hh >> mm >> ss;
    Time time1(hh, mm, ss);
    cout << "Введите 2 время в формате \"hh mm ss\":" << endl;
    cin >> hh >> mm >> ss;
    const Time time2(hh, mm, ss);
    Time time3 = time1.add_time(time2);
    time3.show();
    return 0;
}
