#include <iostream>
using namespace std;

long sumN(long param)
{
    if (param > 0)
        return param+sumN(param-1); //2 + s(1) --> 1 + s(0) --> ** <-- 1 <-- 2 + 1 = 3 | 2 + 1 + 0 + -1
}

int main()
{
    long n;
    cout << "Enter the ending index: ";
    cin >> n;
    while (n < 1) {
        cout << "\nERROR: The ending index must be a natural number! Please input again!" << endl;
        cout << "\nEnter the ending index: ";
        cin >> n;
    }
    cout << "\nSum of all natural numbers, from 1 to " << n << ": " << sumN(n) << endl;
}
