#include <iostream>

using namespace std;

struct Date{
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else
        return false;
}

int monthLength(int year, int month) {
    int months [] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (months[month - 1]) {
        if (month == 2 && isLeap(year))
            return 29;
        else
            return months[month - 1];
    } else
        cout << "Invalid input" << endl;
    return 0;
}

int dayOfYear(Date date) {
    int day = 0;
    for (int i = 1; i < date.month; i++) {
        day += monthLength(date.year, i);
    }
    day += date.day;
    return day;
}

void daysInMonths() {
    for (int yr = 2000; yr < 2002; yr++) {
        for (int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr, mo) << " ";
        cout << endl;
    }
}

void getDayOfYear() {
    Date d{};
    cout << "Enter year month day: ";
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;
}