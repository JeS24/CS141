#include <iostream>
using namespace std;

int main()
{
    long num;
    cout << "Enter the integer, whose divisibilty by 5 and 11, is to be checked: ";
    cin >> num;
    cout << "\n" << num << (((num % 5) == 0 && (num % 11) == 0)?" is ":" is NOT ") << "divisible by 5 and 11!" << endl;
}
