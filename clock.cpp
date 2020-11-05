#include <iostream>
#include <cmath>

using namespace std;

struct Clock {
    unsigned int hour, minute, period;
    void windForward() {
        if (minute + period >= 60) {
            minute += period;
            hour += floor(minute / 60);
            minute %= 60;
        } else {
            minute += period;
        }
        if (hour > 24) {
            hour %= 24;
        }
    }
};

void clock() {
    void error();
    unsigned int hour, minute, period;
    cout << "Enter hour: ";
    cin >> hour;
    if (hour > 23 or hour < 0) {
        error();
    }
    cout << "Enter minute: ";
    cin >> minute;
    if (minute > 59 or minute < 0) {
        error();
    }
    cout << "Enter time period (mins): ";
    cin >> period;
    if (period < 0) {
        error();
    }
    Clock clock = {
            hour = hour,
            minute = minute,
            period = period
    };
    clock.windForward();
    cout << clock.hour << ":" << clock.minute << endl;
}

void error() {
    cout << "Invalid input";
    exit(0);
}