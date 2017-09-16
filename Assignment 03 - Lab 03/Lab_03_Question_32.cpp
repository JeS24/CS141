#include <iostream>
using namespace std;

//Assuming only Integral Inputs
int main()
{
    string num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "\nFirst digit: " << num[0] << endl;
    cout << "And, the last digit: " << num[num.size()-1] << endl;
}
