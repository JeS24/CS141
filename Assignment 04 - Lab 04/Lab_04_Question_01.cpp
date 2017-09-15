#include <iostream>
using namespace std;

long double cube(double arg)
{
    return (arg*arg*arg);
}

int main()
{
    double num;
    cout.precision(16);
    cout << "Enter a number ('Garbage' values after a certain precision): ";
    cin >> num;
    cout << "\nCube of " << num << ": " << cube(num) << endl;
}