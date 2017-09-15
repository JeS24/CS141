#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long n;
    cout << "\nEnter the end-index, 'n': ";
    cin >> n;
    if (n < 0) {
        cout << "\nERROR: Index must be positive! Please input again!";
        main();
    }
    cout << "\nList of Armstrong Numbers, between 1 and " << n << ":" << endl;
    for (long i = 1 ; i <= n ; i++) {
        long sum = 0;
        for (long j = i ; j > 0 ; j /= 10)
            sum += pow(j%10, 3);
        if (sum == i)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}
