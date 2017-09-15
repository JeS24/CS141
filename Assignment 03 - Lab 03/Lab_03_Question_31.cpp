#include <iostream>
using namespace std;

int main()
{
    long long int num, numC;
    int num_of_digits = 0;
    //Not considering floating point values, to not over-complicate the program, which already can't use in-built functions -> :-/
    cout << "Enter the integral number, whose digits are to be counted (A Maximum of 18 digits): ";
    cin >> num;
    numC = num;
    while (numC > 0)
    {
        numC /= 10;
        num_of_digits++;
    }
    //While "9223372036854775807" (19-digits - LLONG_MAX) defines the upper-bound, it's difficult to ascertain if the entered number is smaller than "9223372036854775807" -> Safe Side -> Limit at 18
    if(num_of_digits > 18) {
        cout << "The entered number is too long (> 18 digits)!" << endl;
        return -1; //Error
    }
    cout << "\n" << num << " has " << num_of_digits << " digits!" << endl;
}
