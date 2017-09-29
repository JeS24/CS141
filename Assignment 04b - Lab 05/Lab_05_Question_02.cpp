
#include <iostream>
using namespace std;

long i = 0;
long printN(long param)
{ 
    if (param > 0) {
        cout << ++i << endl;
        printN(--param);
    }
}

int main()
{
    long n;
    cout << "Enter the ending index: ";
    cin >> n;
    cout << "List of natural numbers, from 1 to " << n << ": \n" << endl;
    cout << printN(n) << "\b\b" << endl;
}
