#include <iostream>
using namespace std;

int main()
{
    short month;
    cout << "\nEnter a month number: ";
    cin >> month;
    switch (month)
    {
        case 1: cout << "\n'January' has 31 days!" << endl; return 0;
        case 2: cout << "\n'February' has 28 or 29 days!" << endl; return 0;
        case 3: cout << "\n'March' has 31 days!" << endl; return 0;
        case 4: cout << "\n'April' has 30 days!" << endl; return 0;
        case 5: cout << "\n'May' has 31 days!" << endl; return 0;
        case 6: cout << "\n'June' has 30 days!" << endl; return 0;
        case 7: cout << "\n'July' has 31 days!" << endl; return 0;
        case 8: cout << "\n'August' has 31 days!" << endl; return 0;
        case 9: cout << "\n'September' has 30 days!" << endl; return 0;
        case 10: cout << "\n'October' has 31 days!" << endl; return 0;
        case 11: cout << "\n'November' has 30 days!" << endl; return 0;
        case 12: cout << "\n'December' has 31 days!" << endl; return 0;
        default: cout << "\nERROR: Month-Number must lie between 1 and 12! Please input again!" << endl; main();
    }
}
