#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the end-index, 'n': ";
    cin >> n;
    for (int i = 1 ; i <= n ; i+=2) //Because, wasting processing power in checking whether (i % 2 != 0) makes no sense
            sum += i;
    cout << "Sum of odd numbers, from 1 to " << n << " = " << sum <<  endl;
}
