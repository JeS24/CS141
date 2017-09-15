#include <iostream>
using namespace std;

int main()
{
    long num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "\n" << num << (((num % 2) == 0)?" is ":" is NOT ") << "an even number!" << endl;
}
