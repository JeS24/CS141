#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the end-index, 'n': ";
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
        sum += i;
    cout << "Sum of natural numbers, from 1 to " << n << " = " << sum <<  endl;
}
