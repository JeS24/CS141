#include <iostream>
using namespace std;

long lcm(int a, int b)
{
    int multiple = 0;
    multiple += b;
    if(multiple % a == 0 && multiple % b == 0)
        return multiple;
    else 
        return lcm(a, b);
}

int main()
{
    long n1, n2, LCM;
    cout << "Enter two integers: " << endl;
    cin >> n1 >> n2;
    if(n1 > n2)
        LCM = lcm(n2, n1);
    else
        LCM = lcm(n1, n2);
    cout << "\nL.C.M. of " << n1 << " & " <<  n2 << " is: " << lcm(n1, n2) << endl;
}
