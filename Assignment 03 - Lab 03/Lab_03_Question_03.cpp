#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Enter the number, whose sign is to be checked: ";
    cin >> num;
    if (num == 0)
        cout << "\nThe entered number has NO sign, as it is 0!" << endl;
    else //Not allowed to use "cmath", am I? :-/
        cout << "\nThe entered number is " << ((num > 0)?"positive!":"negative!") << endl;
}
