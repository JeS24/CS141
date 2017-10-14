#include <iostream>
using namespace std;

int main()
{
    long year;
    cout << "Enter the year: ";
    cin >> year;
    cout << "\n" << year << (((((year % 400) == 0)) || (((year % 100) != 0) && ((year % 4) == 0)))?"'s ":"'s NOT ") << "a leap year!" << endl;
}
