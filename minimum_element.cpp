#include <iostream>

using namespace std;

void minimumElement() {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int min;
    for (int *p = vector; *p; ++p) {
        if (*p < min) min = *p;
    }
    cout << min;
}

