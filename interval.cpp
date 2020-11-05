#include <iostream>
#include <cmath>

using namespace std;

struct Interval {
    pair<int, int> start, end;
    void findInterval() const {
        int hour = end.first,
                minute = end.second - start.second;
        if (minute < 0) {
            hour -= floor(60 / abs(minute));
            minute = 60 - abs(minute) % 60;
        }
        hour -= start.first;
        if (hour < 0) {
            hour %= 24;
        }
        cout << hour << ":" << minute << endl;
    }
};

void interval() {
    Interval interval;
    cout << "Enter start time" << endl;
    cout << "Enter hour: ";
    int start;
    cin >> start;
    interval.start.first = start;
    cout << "Enter minute: ";
    cin >> start;
    interval.start.second = start;
    cout << "Enter end time" << endl;
    cout << "Enter hour: ";
    int end;
    cin >> end;
    interval.end.first = end;
    cout << "Enter minute";
    cin >> end;
    interval.end.second = end;
    if (interval.start.first > interval.end.first ||
        interval.start.first == interval.end.first &&
        interval.start.second > interval.end.second) {
        cout << "Invalid input";
        exit(0);
    }
    interval.findInterval();
}