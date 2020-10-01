
#include <iostream>
#include <vector>

using namespace std;

int fib(int n) {
    vector<int> seq = {1, 1};
    for (int i = 1; i < n - 1; i++) {
        seq.push_back(seq[i] + seq[i - 1]);
    }
    return seq[n - 1];
}

void printFib() {
    bool running = true;
    while (running) {
        long n;
        cout << "Enter Index:";
        cin >> n;
        if (n > 0) {
            cout << "The " << n <<"th number in the Fibonacci sequence is " << fib(n) << endl;
        } else {
            cout << "Invalid Input" << endl;
        }
        string run;
        cout << "Repeat?" << endl;
        cout << "Enter [Y, n]:";
        cin >> run;
        if (run == "n") {
            running = false;
        }
    }
}
