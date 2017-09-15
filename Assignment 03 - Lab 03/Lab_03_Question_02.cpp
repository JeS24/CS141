#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3;
    cout.precision(16); //Because, precision of Double ~ 16
    cout << "Enter three numbers, to be compared, one-by-one (The maximum precision is 16 decimal places): " << endl;
    cin >> n1 >> n2 >> n3;
    cout << "\nThe largest among them is " << ((((n1 > n2)?n1:n2) > n3)?((n1 > n2)?n1:n2):n3) << "." << endl;
}
