#include <iostream>
using namespace std;

int Start, End;

void printStrong();

int main()
{
    cout << "Enter the beginning and end-indices, one-by-one: " << endl;
    cin >> Start >> End;
    if (Start < 1 || End < 1 || Start > End) {
        cout << "\nERROR: The input is not valid! Please try again!" << endl;
        main();
    }
    cout << "\nList of Strong Numbers, between " << Start << " and " << End << ":" << endl;
    printStrong();
}

void printStrong()
{
    for (long i = Start ; i <= End ; i++) {
        long sum = 0;
        for (long j = i ; j > 0 ; j /= 10) {
            long fact = 1;
            for (short k = (j%10) ; k > 1 ; k--)
                fact *= k;
            sum += fact;
        }
        if (sum == i)
            cout << "\n" << i;
    }
    cout << "\n----------" << endl;
}
