#include <iostream>
using namespace std;

int main()
{
    short w_d_num;
    cout << "\nEnter a week-day number: ";
    cin >> w_d_num;
    switch (w_d_num)
    {
        case 1: cout << "\n'" << w_d_num << "' refers to Monday!" << endl; return 0;
        case 2: cout << "\n'" << w_d_num << "' refers to Tuesday!" << endl; return 0;
        case 3: cout << "\n'" << w_d_num << "' refers to Wednesday!" << endl; return 0;
        case 4: cout << "\n'" << w_d_num << "' refers to Thursday!" << endl; return 0;
        case 5: cout << "\n'" << w_d_num << "' refers to Friday!" << endl; return 0;
        case 6: cout << "\n'" << w_d_num << "' refers to Saturday!" << endl; return 0;
        case 7: cout << "\n'" << w_d_num << "' refers to Sunday!" << endl; return 0;
        default: cout << "\nERROR: Week-Day Number must lie between 1 and 7! Please input again!" << endl; main();
    }
}
