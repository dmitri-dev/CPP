#include <iostream>
#include <cmath>

using namespace std;

void measurementConverter() {
    int sys;
    float m, ft, in, ftToM = .3048;
    cout << "}----Measurement Converter----{" << endl <<
         "{\n 0 : Metric \n 1 : Imperial \n}" << endl <<
         "Choose a measurement system: ";
    cin >> sys;

    while (sys != 0 && sys != 1) {
        cout << "Invalid Input!" << endl <<
             "Choose a measurement system: ";
        cin >> sys;
    }
    bool running = true;
    while (running) {
        if (sys == 0) {
            cout << "Enter Value (m): ";
            cin >> m;
            while (m < 0) {
                cout << "Invalid Input" << endl <<
                     "Enter Value (m): ";
                cin >> m;
            }
            ft = floor(m / ftToM);
            in = float(m / ftToM * 12) - ft * 12;
            cout << ft << "\'" << in << "\"" << endl;
            running = false;
        } else if (sys == 1) {
            cout << "Enter Value (ft): ";
            cin >> ft;
            while (fmod(ft, 1) != 0) {
                cout << "Invalid Input!" << endl <<
                     "Enter Value (ft): ";
                cin >> ft;
            }
            cout << "Enter Value (in): ";
            cin >> in;
            while (!(in > 0 && in < 12)) {
                cout << "Invalid Input" << endl <<
                     "Enter Value (in): ";
                cin >> in;
            }
            m = float(ft * ftToM) + float(in * ftToM / 12);
            cout << m << "m" << endl;
            running = false;
        }
    }
    cout << "Repeat? [Y/n]: ";
    string run;
    cin >> run;
    if (run == "Y") measurementConverter();
}
