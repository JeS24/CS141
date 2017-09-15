#include <iostream>
using namespace std;

int main()
{
    long n;
    cout << "\nEnter a number: ";
    cin >> n;
    if (n < 0) {
        cout << "\nERROR: The entered number must be positive! Please input again!";
        main();
    }
    cout << "\nList of factors of " << n << ":\n" << endl;
    for (int i = 1 ; i <= n/2 ; i++)
        if (n % i == 0)
                cout << i << endl;
    cout << n << "\n------------" << endl;
}
