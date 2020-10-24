#include <iostream>
#include <cmath>

using namespace std;

void mathematicalMeans() {
    double vector[] = {1., 2., 3., 4., 5.};
    int n = sizeof(vector) / sizeof(vector[0]);
    double ArithmeticMean = 0, HarmonicMean = 0,
            GeometricMean = 1, RootMeanSquare = 0;

    for (auto i : vector) {
        ArithmeticMean += i;
        HarmonicMean += 1. / i;
        GeometricMean *= i;
        RootMeanSquare += i * i;
    }
    ArithmeticMean /= n;
    HarmonicMean = n / HarmonicMean;
    GeometricMean = pow(GeometricMean, 1. / n);
    RootMeanSquare = sqrt(RootMeanSquare / n);

    cout << "Arithmetic Mean = " << ArithmeticMean << endl;
    cout << "Harmonic Mean = " << HarmonicMean << endl;
    cout << "Geometric Mean = " << GeometricMean << endl;
    cout << "RootMean Square = " << RootMeanSquare << endl;
}

