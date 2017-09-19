#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long bin, dec, n;
    dec = 0;
    cout << "Enter a binary number: ";
    cin >> bin;
    n = bin;
    for (int i = 0 ; n > 0 ; n /= 10, i++)
        if(n%10 == 1)
            dec += pow(2, i);
    cout << "\nDecimal representation of " << bin << ": " << dec << endl;
}
