#include <iostream>
using namespace std;

long rev(long param, long rev_f)
{
    if (param % 10 == param)
        rev_f = (rev_f*10) + param;
    else
        rev(param/10, (rev_f*10)+(param%10));
}

int main()
{
    long num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "\n" << num << ((num == rev(num, 0))?" is ":" is NOT ") << "a palindrome!" << endl;
}
