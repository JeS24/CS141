#include <iostream>
using namespace std;

int main()
{
    long double n; //'Cause "any number"
    cout.precision(20); //Warning: Precision can lead to issues
    cout << "Enter the real number, whose multiplication table (Base 10) is to be printed: ";
    cin >> n;
    cout << "\nMultiplication table of " << n << ":\n" << endl;
    for(int i = 1 ; i <= 10 ; i++) //Base = 10
        cout << n << " \u00D7 " << i << " = " << (n*i) << endl; //'\u00D7' for '(Cross) Multiplication Sign'
}
