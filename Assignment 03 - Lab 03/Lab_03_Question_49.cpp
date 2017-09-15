#include <iostream>
using namespace std;

int main()
{
    long n;
    long sum = 0;
    cout << "\nEnter the end-index, 'n': ";
    cin >> n;
    if (n < 0) {
        cout << "\nERROR: Index must be positive! Please input again!";
        main();
    }
    for (int i = 1 ; i <= n ; i++) {
        short counter = 0;
        for (int j = 1 ; j <= i/2 ; j++)
            if (i % j == 0)
                counter++;
        if (counter == 1)
            sum += i;
    }
    cout << "\nSum of Prime Numbers, between 1 and " << n << ": " << sum << endl;
}
