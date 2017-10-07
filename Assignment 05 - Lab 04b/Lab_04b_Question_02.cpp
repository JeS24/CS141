
#include <iostream>
using namespace std;

long i = 0;
long printN(long beg, long end)
{ 
    if (beg == end)
        cout << beg << endl;
    else {
        cout << beg << endl;
        printN(++beg, end);
    }
        
}

int main()
{
    long n;
    cout << "Enter the ending index: ";
    cin >> n;
    cout << "List of natural numbers, from 1 to " << n << ": \n" << endl;
    printN(1, n);
}
