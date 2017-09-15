#include <iostream>
using namespace std;

int main()
{
    long num;
    short sum = 0;
    cout << "\nEnter a natural number: ";
    cin >> num; //!!!! (ISSUE) -> Apparent Recursive Calls | INTENDED FOR DEBUGGING ONLY (Not a general comment)
    if (num < 1) {
        cout << "\nERROR: The entered value must be a natural number! Please input again!" << endl;
        main();
    }
    for(int i = 1 ; i <= num/2 ; i++) // (num/2) -> Because, "Proper Divisors"
        if(num % i == 0)
            sum += i;
    cout << "\n" << num << ((sum == num)?" is ":" is NOT ") << "a Perfect number." << endl;
}
