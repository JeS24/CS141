#include <iostream>
using namespace std;

double n1, n2;

double getMax()
{
    return (n1 > n2)?n1:n2;
}

double getMin()
{
    return (n1 < n2)?n1:n2;
}

int main()
{
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    if (n1 == n2) {
        cout << ((n1 == n2)?"\nThe numbers are identical!":"\n") << endl;
        return 0;
    }
    cout << "\nThe larger one is " << getMax() << ".\nAnd, the smaller one is " << getMin() << "." << endl;
}
