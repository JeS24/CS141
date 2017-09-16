#include <iostream>
using namespace std;

int main()
{
    int units;
    double charge;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    if (units < 0) {
        cout << "\nERROR: Number of units cannot be negative! Please input again!" << endl;
        main();
    }
    if (units <= 50)
        charge = units*0.5;
    else if (units > 50 && units <= 150)
        charge = 25 + units*0.75;
    else if (units > 150 && units <= 250)
        charge = 100 + units*1.2;
    else
        charge = 220 + units*1.5;
    cout << "\nTotal charges: ₹" << (charge*1.2) << endl;
}
