
#include <iostream>
#include <cmath>
using namespace std;

void epsilon() {
    cout << "~~~~~~~~ Epsilon Comparison ~~~~~~~~" <<
    endl << "Enter first number: ";
    int a, b;
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (fabs(1/float(a) - 1/float(b)) < 0.000001) {
        cout << "Results are equal (by 0.000001 epsilon)";
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)";
    }
}
