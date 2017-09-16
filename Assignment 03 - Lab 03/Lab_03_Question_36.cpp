#include <iostream>
using namespace std;

int main()
{
    long num, num_C, prod = 1;
    cout << "Enter a number: ";
    cin >> num;
    num_C = num;
    for (num_C = num ; num_C > 0 ; num_C /= 10)
        prod *= (num_C%10);
    cout << "\nProduct of the digits of " << num << ": " << prod << endl;
}
