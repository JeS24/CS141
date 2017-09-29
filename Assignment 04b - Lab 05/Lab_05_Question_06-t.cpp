#include <iostream>
using namespace std;

int rev(long param)
{
    if (param != 0) {
        cout << param%10;
        rev(param - (param%10));
    }
}

int main()
{
    long num;
    cout << "Enter a natural number (Any other input will be parsed as a natural number): ";
    cin >> num;
    cout << "Reverse of " << num << " :" << rev(num) << endl;
}
