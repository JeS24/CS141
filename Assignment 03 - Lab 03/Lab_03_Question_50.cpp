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
    cout << "\nList of prime factors of " << n << ":\n" << endl;
    for (int i = 1 ; i <= n/2 ; i++) {
        short counter = 0;
        if (n % i == 0) {
            for (int j = 1 ; j <= i/2 ; j++)
                if (i % j == 0)
                    counter++;
            if (counter == 1)
                cout << i << endl;
        }
    }
    cout << "------------" << endl;
}
