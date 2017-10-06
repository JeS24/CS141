#include <iostream>
#include <cmath>

using namespace std;

double power(double param, int n)
{
    if (n > 1)
        return param*power(param, --n);
}

int main()
{
    double num, index;
    cout << "Enter a number: ";
    cin >> num;
    cout << "\nEnter the index, " << num << " is to be raised to: " ;
    cin >> index;
    cout.precision(16);
    cout << "\n" << num << ", raised to the power of " << index << ": " << power(num, index) << endl;
}
