#include <iostream>

using namespace std;

void leibniz_formula() {
    cout << "```` Leibniz Formula ````" << endl;
    while (true) {
        long double pi4 = 0.;
        long n, j = 1;
        cout << "Number of iterations? ";
        cin >> n;
        for (int i = 1; i < n * 2; i += 2) {
            j++;
            j % 2 == 0 ? pi4 += 1./i : pi4 -= 1./i;
        }
        cout.precision(20);
        cout << "Pi = " << (pi4 * 4.) << endl;
        cout << "Repeat? [Y/n]: ";
        string run;
        cin >> run;
        if (run != "Y") return;
    }
}

