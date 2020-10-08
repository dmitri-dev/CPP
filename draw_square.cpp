#include <iostream>

using namespace std;

void drawSquare() {
    cout << "<*> Draw a Square <*>" << endl;
    int limit = 20;
    while (true) {
        cout << "Enter integer:";
        int n;
        cin >> n;
        if (n < 1) {
            cout << "Invalid input: please enter an integer greater than 1" << endl;
            continue;
        }
        if (n > limit) {
            cout << "Sorry, the side size is too big"
                 << endl << "Limit: " << limit << endl;
            continue;
        }
        cout << '+';
        for (int i = 0; i < n; i++)
            cout << '-';
        cout << '+' << endl;
        for (int i = 0; i < n; i++) {
            cout << '|';
            for (int j = 0; j < n; j++)
                cout << ' ';
            cout << '|' << endl;
        }
        cout << '+';
        for (int i = 0; i < n; i++)
            cout << '-';
        cout << '+' << endl;
        cout << "Repeat? [Y/n]: ";
        string run;
        cin >> run;
        if (run != "Y") break;
    }
}