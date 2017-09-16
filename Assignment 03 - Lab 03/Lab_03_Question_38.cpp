#include <iostream>
using namespace std;

int main()
{
    long num, rev = 0;
    cout << "Enter a positive number: ";
    cin >> num;
    if(num < 0) {
        cout << "\nThe entered number must be positive! Please input again!" << endl;
        main();
    }
    for(int i = num ; i > 0 ; i /= 10)
        rev = (rev*10) + (i%10);
    cout << "\n" << num << ((rev == num)?" is ":" is NOT ") << "a Palindrome!" << endl;
}
