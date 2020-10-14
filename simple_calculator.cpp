#include <iostream>
using namespace std;

void simpleCalculator() {
    cout << "< Calculator >" << endl;
    cout << "MENU:\n0 - exit\n1 - addition\n2 -"
            " subtraction\n3 - multiplication\n"
            "4 - division\n" << endl;
    while (true) {
        cout << "Choose an operator: ";
        int op;
        cin >> op;
        if (op == 0) return;
        if (op > 4 || op < 0) {
            cout << "Invalid input: try again" << endl;
            continue;
        }
        cout << "Enter two numbers: ";
        double a, b;
        cin >> a, cin >> b;
        double result = 0;
        switch (op) {
            default:
            case 1:
                result = a + b;
                break;
            case 2:
                result = a - b;
                break;
            case 3:
                result = a * b;
                break;
            case 4:
                if (b == 0) {
                    cout << "Invalid input: cannot divide by 0" << endl;
                } else {
                    result = a / b;
                }
        }
        cout << "Result: " << result << endl;
    }
}

