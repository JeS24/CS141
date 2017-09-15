#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long num;
    int sum = 0;
    cout << "\nEnter a natural number: ";
    cin >> num;
    if (num < 1) {
        cout << "\nERROR: The entered value must be a natural number! Please input again!" << endl;
        main();
    }
    for (long n = num ; n > 0 ; n /= 10)
        sum += pow(n%10, 3);
    cout << "\n" << num << ((sum == num)?" is ":" is NOT ") << "an Armstrong number!" << endl;
}
