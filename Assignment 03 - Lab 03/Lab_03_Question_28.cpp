#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the end-index, 'n': ";
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
        if (i % 2 == 0) //Waste of processing power -> Can just put (init i = 0)(i <= n)(i+=2) --> NEXT PROGRAM DOESN'T USE THE CURRENT METHOD
            sum += i;
    cout << "Sum of even numbers, from 1 to " << n << " = " << sum <<  endl;
}
