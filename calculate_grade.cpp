#include <iostream>
#include <vector>

using namespace std;

void calculateGrade() {
    cout << "{ Calculate Grade }" << endl;
    vector<vector<float>> grades;
    float total_weight = 0;
    while (true) {
        cout << "Enter grade: ";
        float grade;
        cin >> grade;
        cout << "Enter grade weight (as %): ";
        float weight;
        cin >> weight;
        grades.push_back({ grade , weight });
        total_weight += weight;
        cout << "Enter another grade? [y/n]: ";
        string run;
        cin >> run;
        if (run != "y") break;
    }
    float result = 0;
    for (auto grade : grades) {
        result += grade[0] * (grade[1] / 100);
    }
    result += 100 - total_weight;
    cout << "Calculated Grade: " << result;
}
