#include <iostream>
using namespace std;

//Assuming only Integral Inputs
int main()
{
    long num;
    string n;
    cout << "Enter an integer: ";
    cin >> num;
    n = to_string(num);
    cout << "\nFirst digit: " << n[0] << endl;
    cout << "And, the last digit: " << n[n.size()-1] << endl;
}
