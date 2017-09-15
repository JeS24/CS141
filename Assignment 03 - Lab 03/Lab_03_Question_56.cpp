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
    cout << "\nList of Strong Numbers, between 1 and " << n << ":" << endl;
    for (long i = 1 ; i <= n ; i++) {
        long sum = 0;
        for (long j = i ; j > 0 ; j /= 10) {
            long fact = 1;
            for (short k = (j%10) ; k > 1 ; k--)
                fact *= k;
            sum += fact;
        }
        if (sum == i)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}
