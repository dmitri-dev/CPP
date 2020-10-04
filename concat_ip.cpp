#include <iostream>
#include <cmath>

using namespace std;

void concatIP() {
    cout << "<------- Concat IP ------->" << endl <<
         "Enter 4 numbers between 1 and 255" << endl <<
         "Enter number: ";
    string result;
    int input;
    for (int i = 0; i < 4; i++) {
        cin >> input;
        if (input > 0 && input < pow(2, 8)) {
            result += to_string(input) + ".";
            if (i < 3) {
                cout << "Enter another number: ";
            }
        } else {
            cout << "Error: Invalid Input" << endl << "Try again: ";
            i--;
        }
    }
    cout << "Result: " << result.substr(0, result.size() - 1);
}
