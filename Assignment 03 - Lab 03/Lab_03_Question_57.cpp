#include <iostream>
using namespace std;

int main()
{
    long a, b, n;
    a = 0;
    b = 1;
    cout << "Enter the number of terms in the fibonacci series: ";
    cin >> n;
    if (n < 0) {
        cout << "\nERROR: The number of terms must be positive! Please input again!" << endl;
        main();
    }
    cout << "\nFibonacci Series, upto " << n << " terms:\n" << endl;
    cout << a << ", " << b << ", ";
    for (int i = 0, sum ; i <= n ; i++) {
        sum = a+b;
        cout << sum << ", ";
        a = b;
        b = sum;
    }
    cout << "\b\b." << endl;
}
