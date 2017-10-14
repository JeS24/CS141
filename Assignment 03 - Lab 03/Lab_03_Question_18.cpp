#include <iostream>
using namespace std;

int main()
{
    long c_p, s_p;
    cout << "\nEnter the Cost Price: ";
    cin >> c_p;
    cout << "\nEnter the Selling Price: ";
    cin >> s_p;
    while (c_p < 0 || s_p < 0) {
        cout << "\nERROR: Price cannot be negative! Please input again!" << endl;
        cout << "\nEnter the Cost Price: ";
        cin >> c_p;
        cout << "\nEnter the Selling Price: ";
        cin >> s_p;
    }
    cout << "\nA " << ((c_p < s_p)?"profit":"loss") << " of ₹ " << abs(c_p - s_p)<< " has been incurred!" << endl;
}
