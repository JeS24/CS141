//A C++ program to check, whether a number is even or odd, using functions
#include <iostream>
using namespace std;

long num;

string getEvenOrOdd()
{
    return ((num % 2 == 0)?"even.":"odd.");
}

int main()
{
    cout << "Enter a number: ";
    cin >> num;
    cout << "\nThe entered number is " << getEvenOrOdd() << endl;
}
