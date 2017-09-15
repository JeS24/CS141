#include <iostream>
using namespace std;

int main()
{
    long num;
    short counter = 0;
    cout << "\nEnter a natural number: ";
    cin >> num;
    if (num < 1) {
        cout << "\nERROR: The entered value must be a natural number! Please input again!" << endl;
        main();
    }
    for (int i = 1 ; i <= num/2 ; i++)
        if (num % i == 0)
            counter++;
    cout << "\n" << num << ((counter == 1)?" is ":" is NOT ") << "a Prime number!" << endl;
}
