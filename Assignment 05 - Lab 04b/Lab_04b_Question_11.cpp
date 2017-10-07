#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else
       return n1;
}

int main()
{
   long n1, n2;
   cout << "Enter two integers: " << endl;
   cin >> n1 >> n2;
   cout << "\nG.C.D. of " << n1 << " & " <<  n2 << " is: " << gcd(n1, n2) << endl;
}
