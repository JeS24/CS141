#include <iostream>
using namespace std;

unsigned long long int fact(int n) //Useless because of storage limitations
{
    if (n > 1)
        return n*fact(--n);
    //unsigned long long int i = 10;
}

int main()
{
    int num;
    cout << "Enter a positive integer (Max Limit: 20 | Garbage values beyond 20): ";
    cin >> num;
    while (num < 0 || num > 20) {

        cout << "\nERROR: The entered number must be a positive integer, lying between 1 and 20! Please input again!" << endl;
        cout << "Enter a positive integer (Max Limit: 20 | Garbage values beyond 20): ";
        cin >> num;
    }
    cout.precision(100);
    cout << "\nFactorial of " << num << ": " << ((num == 0)?1:fact(num)) << endl; //Checks for n == 1 here itself
}
