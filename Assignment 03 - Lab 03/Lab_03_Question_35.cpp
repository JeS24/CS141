#include <iostream>
using namespace std;

//Assuming only Positive Integral Inputs
int main()
{
    long long int num, numC;
    int sum = 0;
    cout << "Enter an integer (Sign won't be considered): ";
    cin >> num;
    numC = (num > 0)?num:((-1)*num);
    for( ; numC > 0 ; numC /= 10)
        sum += (numC % 10);
    cout << "\nSum of the digits of " << num << ": " << sum << endl;
}
