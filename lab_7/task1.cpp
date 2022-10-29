#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
    Time () {}
    Time (int hh, int mm, int ss) {
        if (check_time(hh, mm, ss)) {
            hours = hh;
            minutes = mm;
            seconds = ss;
        }
        else cerr << "Неправильный формат времени" << endl;
    }
    bool check_time(int hh, int mm, int ss) {
        return 0 <= hh && hh <= 23 &&
               0 <= mm && mm <= 60 &&
               0 <= ss && ss <= 60;
    }
    int count_seconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    void make_out_seconds() {
        this->hours = this->seconds / 3600;
        this->seconds %= 3600;
        this->minutes = this->seconds / 60;
        this->seconds %= 60;
    };

    Time diff_time(Time &time) {
        Time res;
        res.seconds = time.count_seconds() - this->count_seconds();
        res.make_out_seconds();
        return res;
    }

    Time add_time(Time &time) {
        Time res;
        res.seconds = time.count_seconds() + this->count_seconds();
        res.make_out_seconds();
        return res;
    }

};

int main() {
    int hh, mm, ss;
    cout << "Введите 1 время в формате \"hh mm ss\":" << endl;
    cin >> hh >> mm >> ss;
    Time time1(hh, mm, ss);
    cout << "Введите 2 время в формате \"hh mm ss\":" << endl;
    cin >> hh >> mm >> ss;
    Time time2(hh, mm, ss);
    cout << time1.diff_time(time2).count_seconds() << endl;
    cout << time1.add_time(time2).count_seconds() << endl;
    return 0;
}