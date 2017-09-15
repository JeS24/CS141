#include <iostream>
using namespace std;

//Assuming only Positive Integral Inputs
int main()
{
    long long int num, numC;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0) {
        cout << "The entered number must be positive!" << endl;
        return -1; //Error
    }
    for(numC = num ; numC > 0 ; numC /= 10)
        sum += (numC % 10);
    cout << "\nSum of the digits of " << num << ": " << sum << endl;
}
