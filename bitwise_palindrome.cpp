#include <iostream>
#include <bitset>
using namespace std;

int bitwisePalindrome() {
    cout << "# Bitwise Palindrome #" << endl;
    unsigned short int val;
    bool ispalindrome = false;
    cout << "value = ";
    cin >> val;

    bitset<16> bitset(val);
    string bit_val = bitset.to_string();
    string reversed = string(bit_val.rbegin(), bit_val.rend());
    if (bit_val == reversed) ispalindrome = true;

    if (ispalindrome)
        cout << val << " is a bitwise palindrome" << endl;
    else
        cout << val << " is not a bitwise palindrome" << endl;
    return 0;
}

