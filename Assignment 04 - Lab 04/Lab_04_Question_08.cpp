//A C++ program to print all the Armstrong numbers, between the given interval, using functions
#include <iostream>
#include <cmath>

/**
* NOTE: THIS PROGRAM USES THE "SUM-OF-THIRD-POWER-OF-DIGITS == NUMBER" DEFINITION OF ARMSTRONG NUMBERS
*/
using namespace std;

int Start, End;

void printArmstrong();

int main()
{
    cout << "\nEnter the beginning and end-indices, one-by-one: " << endl;
    cin >> Start >> End;
    if (Start < 1 || End < 1 || Start > End) {
        cout << "\nERROR: The input is not valid! Please try again!" << endl;
        main();
    }
    cout << "\nList of Armstrong Numbers, between " << Start << " and " << End << ":" << endl;
    printArmstrong();
}

void printArmstrong()
{
    for (int i = Start ; i <= End ; i++) {
        int sum = 0;
        for (int j = i ; j > 0 ; j /= 10)
            sum += pow(j%10, 3);
        if (sum == i)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}
