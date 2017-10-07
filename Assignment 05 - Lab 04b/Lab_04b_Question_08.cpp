#include <iostream>
#include <cmath>
using namespace std;

int sumD(long param, long rev_f)
{
    if (param % 10 == param) {
        rev_f += param;
        return rev_f;
    }
    else
        sumD(param/10, rev_f+(param%10));
}

int main()
{
    long num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "\nSum of the digits of " << num << ": " << sumD(abs(num), 0) << endl;
}
