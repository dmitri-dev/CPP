#include <iostream>
using namespace std;

void grossToNet() {
    cout << "~~~Tax Conversion~~~" << endl;
    string error = "Invalid input: try again";
    float grossprice, taxrate, netprice, taxvalue;
    while (true) {
        cout << "Enter a gross price: ";
        cin >> grossprice;
        if (grossprice > 0) {
            cout << "Enter a tax rate: ";
            cin >> taxrate;
            if (taxrate > 0 && taxrate < 100) {
                taxrate /= 100;

                netprice = grossprice / (1 + taxrate);
                taxvalue = grossprice - netprice;

                cout << "Net price: " << netprice << endl;
                cout << "Tax value: " << taxvalue << endl;
                cout << "Repeat? [Y/n]: ";
                string run;
                cin >> run;
                if (run != "Y") return; else continue;
            }
        }
        cout << error << endl;
    }
}

