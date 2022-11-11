#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Time {
public:
    struct ExTime {
        ExTime() : message("Неправильный формат времени") {}
        void printMessage() const {
            cout << message;
        }
        string message;
    };

    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int hh, int mm, int ss) {
        if (check_time(hh, mm, ss)) {
            hours = hh;
            minutes = mm;
            seconds = ss;
        } else throw ExTime();
    }

    void show() const {
        printf("%02d:%02d:%02d", hours, minutes, seconds);
    }

    unsigned count_seconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    Time diff_time(const Time &time) const {
        Time res;
        res.seconds = time.count_seconds() - this->count_seconds();
        res.make_out_seconds();
        return res;
    }

private:
    bool check_time(int hh, int mm, int ss) const {
        return 0 <= hh && hh < 24 &&
               0 <= mm && mm < 60 &&
               0 <= ss && ss < 60;
    }

    void make_out_seconds() {
        hours = seconds / 3600;
        seconds %= 3600;
        minutes = seconds / 60;
        seconds %= 60;
    }

    unsigned hours;
    unsigned minutes;
    unsigned seconds;
};

int main() {
    unsigned hh, mm, ss;
    try {
        cout << "Введите 1 время в формате \"hh mm ss\":" << endl;
        cin >> hh >> mm >> ss;
        Time time1(hh, mm, ss);
        cout << "Введите 2 время в формате \"hh mm ss\":" << endl;
        cin >> hh >> mm >> ss;
        const Time time2(hh, mm, ss);
        Time time3 = time1.diff_time(time2);
        time3.show();
    }
    catch (const Time::ExTime &error) {
        error.printMessage();
    }
    return 0;
}
