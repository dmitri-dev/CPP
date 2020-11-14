#include <iostream>

using namespace std;

struct Interval{
    int start_hour, start_minute, end_hour, end_minute;
    void calculateInterval() {
        int hour, minute;
        hour = end_hour - start_hour;
        minute = end_minute - start_minute;
        if (minute < 0) {
            hour += int(60 / minute);
            minute = 60 + minute;
        }
        if (hour < 0) {
            hour = 24 - hour;
        }
        cout << hour << ":" << minute;
    }
};

void interval(){
    Interval interval{};
    int hour, minute;
    cout << R"(Enter start time: "hour" "minute": )";
    cin >> hour >> minute;
    interval.start_hour = hour;
    interval.start_minute = minute;
    cout << R"(Enter end time: "hour" "minute": )";
    cin >> hour >> minute;
    interval.end_hour = hour;
    interval.end_minute = minute;
    interval.calculateInterval();
}
