#include <iostream>
using namespace std;

long n, i = 0, term = 0;
long fibo(long n, long a, long b)
{
    if (++i < n) {
        term = a+b;
        fibo(n, b, term);
    }
    return term;
}

int main()
{
    cout << "Enter the value of 'n' (Starting Index = 0): ";
    cin >> n;
    cout << "\nRequired Fibonacci term: " << ((n == 0 || n == 1)?((n == 0)?0:1):fibo(n, 0, 1)) << endl; //Circumvention
}
