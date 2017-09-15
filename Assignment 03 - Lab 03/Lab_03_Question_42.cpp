#include <iostream>
using namespace std;

int main()
{
    double num;
    long double a_num;
    short ex, a_ex;
    long double power = 1;
    cout << "\nEnter a number: ";
    cin >> num;
    cout << "\nEnter the exponent: ";
    cin >> ex;
    if (ex < 0) {
        a_num = 1/num;
        a_ex = -1*ex;
    }
    else {
        a_num = num;
        a_ex = ex;
    }
    for (int i = 1; i <= a_ex ; i++)
        power *= a_num;
    cout << "\n" << num << " raised to the power of " << ex << ": " << power << endl;
}
