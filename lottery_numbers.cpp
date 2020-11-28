#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

void lotteryNumbers() {
    int maxball;
    int ballsno;
    cout << "Max ball number? ";
    cin >> maxball;
    cout << "How many balls?";
    cin >> ballsno;
    if (ballsno > maxball) {
        cout << "Invalid input";
        exit(-1);
    }
    srand(time(nullptr));
    int *numbers = new int[ballsno];
    for (int i = 0; i < ballsno; i++) {
        int num = rand() % maxball + 1;
        bool duplicate = find(numbers, numbers + ballsno, num) != numbers + ballsno;
        if (!duplicate) {
            numbers[i] = num;
            cout << numbers[i] << endl;
        } else i -= 1;
    }
    delete [] numbers;
}

