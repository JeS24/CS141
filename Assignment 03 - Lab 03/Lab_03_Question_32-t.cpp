#include <iostream>
using namespace std;

//Assuming only Integral Inputs
int main()
{
    int num, numC, firstDigit, lastDigit;
    cout << "Enter an integer: ";
    cin >> num;
    numC = num;
    if (numC < 0)
        numC *= -1;
    lastDigit = num % 10;
    while (numC > 0)
    {
        firstDigit = numC % 10;
        numC /= 10;
    }
    cout << "\nFirst digit: " << firstDigit << endl;
    cout << "And, the last digit: " << lastDigit << endl;
}
