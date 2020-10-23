#include <iostream>

using namespace std;

void nthPower() {
    cout << "Nth Power" << endl;
    while (true) {
        cout << "Enter coefficient: ";
        int n;
        cin >> n;
        cout << "Enter exponent: ";
        int x;
        cin >> x;
        long long int result = 1;
        for (int i = 1; i <= x; i++) {
            result *= n;
        }
        cout << "The " << x << "th power of " << n <<
             " is: " << result << endl << "Repeat? [Y/n]: ";
        string run;
        cin >> run;
        if (run != "Y") break;
    }
}

