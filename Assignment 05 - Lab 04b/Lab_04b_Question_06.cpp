#include <iostream>
using namespace std;

long rev(long param)
{
    if (param % 10 == param)
        cout << param;
    else {
        cout << param%10;
        rev(param/10);
    }
}

int main()
{
    long num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "Reverse of " << num << " :"; rev(num);
    cout << endl;
}
