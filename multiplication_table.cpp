#include <iostream>

using namespace std;

void multiplicationTable() {
    int matrix[10][10] = {};
    int factor = 1;
    for (auto *i : matrix) {
        *i = factor;
        for (auto *j = i + 1; j < i + 10; j++) {
            *j += *(j - 1) + factor;
        }
        factor++;
    }
    for (auto & i : matrix) {
        for (int j : i) {
            cout.width(4);
            cout << j;
        }
        cout << endl;
    }
}