#include <iostream>
using namespace std;

int main()
{
    long num, fact = 1;
    cout << "\nEnter a natural number: ";
    cin >> num;
    if (num < 1) {
        cout << "\nERROR: The entered value must be a natural number! Please input again!" << endl;
        main();
    }
    for (int i = 1 ; i <= num ; i++)
        fact *= i;
    cout << "\nFactorial of " << num << ": " << fact << endl;
}
