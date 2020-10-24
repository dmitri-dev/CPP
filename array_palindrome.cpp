#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void arrayPalindrome() {
    int array[] = { 1, 7, 3, 8, 3, 7, 1 };
    bool ispalindrome = true;
    int n = sizeof(array) / sizeof(array[0]);

    vector<int> forward, reversed;
    for (int i = 0; i <= ceil(n / 2); i++) {
        forward.push_back(array[i]);
        reversed.push_back(array[n - i - 1]);
    }
    if (forward != reversed) ispalindrome = false;

    if(ispalindrome)
        cout << "It's a palindrome";
    else
        cout << "It isn't a palindrome";
    cout << endl;
}
