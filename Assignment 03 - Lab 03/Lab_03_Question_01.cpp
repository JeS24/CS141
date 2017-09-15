#include <iostream>
using namespace std;

/**
* IMPORTANT NOTICE *
* Comparing two floating point decimals beyond a certain precision, 
* can produce bizarre results (due to banker's rounding-off errors)!
* This problem hasn't been (fully) worked out yet!
**/

int main()
{
    double n1, n2;
    cout.precision(16); //Because, precision of Double ~ 16
    cout << "Enter 2 numbers, to be compared, one-by-one (The maximum precision is 16 decimal places):" << endl;
    cin >> n1 >> n2;
    if (n1/n2 == 1)
        cout << "The numbers are equal!" << endl;
    else if (n1 > n2)
        cout << "\n" << n1 << " is greater than " << n2 << endl;
    else if (n1 < n2)
        cout << "\n" <<  n2 << " is greater than " << n1 << endl;
}
