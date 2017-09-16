#include <iostream>
using namespace std;

int main()
{
    long basic, gross_sal;
    cout << "Enter the basic salary: ";
    cin >> basic;
    if (basic < 0) {
        cout << "\nERROR: Money cannot be negative! Please input again!" << endl;
        main();
    }
    if (basic <= 10000)
        gross_sal = basic + (0.2*basic) + (0.8*basic);
    else if (basic > 10000 || basic <= 20000)
        gross_sal = basic + (0.25*basic) + (0.9*basic);
    else if (basic > 20000)
        gross_sal = basic + (0.3*basic) + (0.95*basic);
    cout << "\nGross Salary: ₹" << gross_sal << endl;
}
