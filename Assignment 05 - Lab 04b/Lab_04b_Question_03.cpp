#include <iostream>
using namespace std;

long printOdd(long a, long b)
{
    if (a % 2 != 0) {
        if (a == b)
            cout << a << endl;
        else {
            cout << a << endl;
            printOdd(++a, b);
        }
    }
    else if (a < b)
        printOdd(++a, b);
}

long printEven(long a, long b)
{
    if (a % 2 == 0) {
        if (a == b)
            cout << a << endl;
        else {
            cout << a << endl;
            printEven(++a, b);
        }
    }
    else if (a < b)
        printEven(++a, b);
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
    cout << "\nSelect an option:\n\n1. Print all odd numbers, between the indices\n2. Print all even numbers, between the indices\nYour Selection: ";
    cin >> choice;
    switch (choice)
    {
        case 1: cout << "\nList of odd numbers, between " << m << " and " << n << ": \n\n"; printOdd(m, n); break;
        case 2: cout << "\nList of even numbers, between " << m << " and " << n << ": \n\n"; printEven(m, n); break;
        default: cout << "\nWrong Input! Please try again!" << endl;
    }
}
