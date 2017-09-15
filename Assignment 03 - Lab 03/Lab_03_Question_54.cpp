#include <iostream>
using namespace std;

int main()
{
    long n;
    cout << "\nEnter the end-index, 'n': ";
    cin >> n;
    if (n < 0) {
        cout << "\nERROR: Index must be positive! Please input again!" << endl;
        main();
    }
    cout << "\nList of Perfect Numbers, between 1 and " << n << ":" << endl;
    for (long i = 1 ; i <= n ; i++) {
        short sum = 0;
        for (long j = 1 ; j <= i/2 ; j++)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}
