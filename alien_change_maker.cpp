#include <iostream>

using namespace std;

void alienChangeMaker() {
    cout << "<%> Alien Change Maker <%>" << endl
         << "Enter amount: ";
    int input;
    cin >> input;
    int denominations [5] = { 50, 20, 10, 5, 1 };
    while (input != 0) {
        for (int i = 0; i < 5; i++) {
            int note = denominations[i];
            if (input >= note) {
                cout << note << " ";
                input -= note;
                i -= 1;
            }
        }
    }
}

