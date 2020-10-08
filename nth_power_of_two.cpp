#include <iostream>
using namespace std;

void nthPowerOfTwo() {
    cout << "Nth Power of Two" << endl;
    while (true) {
        cout << "Enter power: ";
        long double n, result = 2;
        cin >> n;
        for (long i = 1; i < n; i++) {
            result *= 2;
        }
        cout << "The " << n << "th power of 2 is: " << result
             << endl << "Repeat? [Y/n]: ";
        string run;
        cin >> run;
        if (run != "Y") break;
    }
}

