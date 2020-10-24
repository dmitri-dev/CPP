#include <iostream>

using namespace std;

void symmetricMatrix() {
    double matrix[][4] = { { 1, 2, 3, 4 },
                           { 2, 2, 3, 1 },
                           { 3, 3, 3, 2 },
                           { 4, 1, 2, 4 } };

    int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    bool issymmetric = true;

    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            auto Axis1 = matrix[i][j], Axis2 = matrix[j][i];
            if (Axis1 != Axis2) {
                issymmetric = false;
            }
        }
    }

    if(issymmetric)
        cout << "The matrix is symmetric" << endl;
    else
        cout << "The matrix is not symmetric" << endl;
}