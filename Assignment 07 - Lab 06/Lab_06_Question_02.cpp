#include<iostream>
using namespace std;

int main()
{
    int *p, a, b;
    cout << "Enter the value of 'a': ";
    cin >> a;
    cout << "\nNow, enter the value of 'b': ";
    cin >> b;
    p = &a;
    cout << "\nValues of 'a', 'b' and '*p', respectively, are: "  << a << ", " << b << " and " << *p << endl;
    a = 2;
    b = 3;
    cout << "After setting 'a' to 2, and 'b' to 3, values of 'a', 'b' and '*p', respectively, are: " << a << ", " << b << " and " << *p << endl;
    p = &b;
    cout << "After pointing 'p' to 'b', values of 'a', 'b' and '*p', respectively, are: " << a << ", " << b << " and " << *p << endl;
}
