#include <iostream>
using namespace std;

int main()
{
    long num, sum = 0;
    cout << "\nEnter a natural number: ";
    cin >> num;
    if (num < 1) {
        cout << "\nERROR: The entered value must be a natural number! Please input again!" << endl;
        main();
    };
    for (long i = num ; i > 0 ; i /= 10) {
        long fact = 1;
        for (short j = (i%10) ; j > 1 ; j--)
            fact *= j;
        sum += fact;
    }
    cout << "\n" << num << ((sum == num)?" is ":" is NOT ") << "a Strong number." << endl;
}
