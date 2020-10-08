#include <iostream>
#include <map>
#include <sstream>
using namespace std;

void zellersCongruence()
{
    cout << ")--------> Zellers Congruence <--------(" << endl <<
         "1900-2099" << endl;
    while (true) {
        cout << "Enter Year: ";
        int year, month, day;
        cin >> year;
        if (year >= 1900 && year < 2100) {
            cout << "Enter Month: ";
            cin >> month;
            if (month > 0 && month <= 12) {
                map<int, int> daysInMonths = {
                        {1, 31}, {2, 31}, {3, 31},
                        {4, 30}, {5, 31}, {6, 30},
                        {7, 31}, {8, 31}, {9, 30},
                        {10, 31}, {11, 30}, {12, 31}
                };
                if (month == 2) {
                    if (year % 4 == 0) {
                        daysInMonths[2] = 28;
                    }
                }
                cout << "Enter Day: ";
                cin >> day;
                if (day > 0 && day <= daysInMonths[month]) {
                    ostringstream output;
                    output << month << "/" << day <<
                           "/" << year << " is a ";
                    month -= 2;
                    if (month < 0) {
                        month += 12;
                        year--;
                    }
                    month = month * 83 / 32;
                    month += day;
                    month += year;
                    month += year / 4;
                    month -= year / 100;
                    month += year / 400;
                    day = month % 7;
                    string days [] = {"Sunday", "Monday", "Tuesday",
                                      "Wednesday","Thursday", "Friday","Saturday"};
                    cout << output.str() << days[day] << endl <<
                         "Repeat? [Y/n]: ";
                    string run;
                    cin >> run;
                    if (run != "Y") return; else continue;
                }
            }
        }
        cout << "Invalid input: try again" << endl;
    }
}


