#include <iostream>
using namespace std;

long printOdd(long a, long b)
{
    if (a % 2 != 0 && a <= b) {
        cout << a << endl;
        printOdd(++a, b);
    }
    else
        printOdd(++a, b);
}

long printEven(long a, long b)
{
    if (a % 2 == 0 && a <= b) {
        cout << a << endl;
        printEven(++a, b);
    }
    else
        printEven(++a, b);
}

int main()
{
    long m, n;
    short choice;
    cout << "Enter the beginning and the ending index, one-by-one: " << endl;
    cin >> m >> n;
    cout << "\nSelect an option:\n\n1. Print all odd numbers, between the indices\n2. Print all even numbers, between the indices\nYour Selection: ";
    cin >> choice;
    switch (choice)
    {
        case 1: cout << "\nList of odd numbers, between " << m << " and " << n << ": \n\n" << printOdd(m, n); break;
        case 2: cout << "\nList of even numbers, between " << m << " and " << n << ": \n\n" << printEven(m, n); break;
        default: cout << "\nWrong Input! Please try again!";
    }
}
