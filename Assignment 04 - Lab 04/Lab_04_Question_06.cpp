#include <iostream>
using namespace std;

int Start, End;

void printPrimes();

int main()
{
    cout << "\nEnter the beginning and end-indices, one-by-one: " << endl;
    cin >> Start >> End;
    while (Start < 1 || End < 1 || Start > End) {
        cout << "\nERROR: The input is not valid! Please try again!" << endl;
        cout << "\nEnter the beginning and end-indices, one-by-one: " << endl;
        cin >> Start >> End;
    }
    cout << "\nList of Prime Numbers, between " << Start << " and " << End << ":" << endl;
    printPrimes();
}

void printPrimes()
{
    for (int i = Start ; i <= End ; i++) {
        short counter = 0;
        for (int j = 1 ; j <= i/2 ; j++)
            if (i % j == 0)
                counter++;
        if (counter == 1)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}
