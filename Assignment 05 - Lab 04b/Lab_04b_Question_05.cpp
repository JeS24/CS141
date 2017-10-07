#include <iostream>
using namespace std;

long sumOdd(long a, long b)
{
    if (b > a)
        return b+sumOdd(a, b-2);
}

long sumEven(long a, long b)
{
    if (b > a)
        return b+sumEven(a, b-2);
}

int main()
{
    long m, n;
    short choice;
    cout << "Enter the beginning and the ending index, one-by-one: " << endl;
    cin >> m >> n;
    while (m > n) {
        cout << "\nERROR: The beginning index must be smaller than or equal to the ending index! Please input again!" << endl;
        cout << "\nEnter the beginning and the ending index, one-by-one: " << endl;
        cin >> m >> n;
    }
    cout << "\nSelect an option:\n\n1. Print the sum of all odd numbers, between the indices\n2. Print the sum of all even numbers, between the indices\nYour Selection: ";
    cin >> choice;
    switch (choice)
    {
        case 1: cout << "\nSum of odd numbers, between " << m << " and " << n << ": \n\n" << sumOdd(((m % 2 != 0)?m:m+1), ((n % 2 != 0)?n:n-1)) << endl; break;
        case 2: cout << "\nSum of even numbers, between " << m << " and " << n << ": \n\n" << sumEven(((m % 2 == 0)?m:m+1), ((n % 2 == 0)?n:n-1)) << endl; break;
        default: cout << "\nWrong Input! Please try again!";
    }
}
