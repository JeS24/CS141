#include <iostream>
using namespace std;

int main()
{
    signed short year;
    cout << "Enter the year: ";
    cin >> year;
    cout << "\n" << year << ((((year % 400) == 0) || ((year % 400) != 0) && ((year % 4) == 0))?" is ":" is NOT ") << "a leap year!" << endl;
}
