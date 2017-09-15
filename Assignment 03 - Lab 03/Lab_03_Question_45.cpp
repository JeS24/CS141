#include <iostream>
using namespace std;

int main()
{
    long n1, n2, t1, t2;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    t1 = n1;
    t2 = n2;
    while (t1 != t2)
    {
        if (t1 > t2)
            t1 -= t2;
        else
            t2 -= t1;
    }
    cout << "\nHCF of " << n1 << " and " << n2 << ": " << t1 << endl;
}