#include <iostream>
using namespace std;

void setBits() {
    cout << "Enter a number: ";
    unsigned long n;
    cin >> n;
    int result = 0;
    while (n) {
        n &= (n - 1);
        result++;
    }
    cout <<"Number of 1's in n is: "<< result;
}

