#include <iostream>
using namespace std;

int Start, End;

void printPerfect();

int main()
{
    cout << "\nEnter the beginning and end-indices, one-by-one: " << endl;
    cin >> Start >> End;
    if (Start < 1 || End < 1 || Start > End) {
        cout << "\nERROR: The input is not valid! Please try again!" << endl;
        main();
    }
    cout << "\nList of Perfect Numbers, between " << Start << " and " << End << ":" << endl;
    printPerfect();
}

void printPerfect()
{
    for (int i = Start ; i <= End ; i++) {
        short sum = 0;
        for (int j = 1 ; j <= i/2 ; j++)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}

