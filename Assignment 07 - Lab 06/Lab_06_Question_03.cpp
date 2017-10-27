#include <iostream>
using namespace std;

void printArrNormal(long param[])
{
    cout << "\nPrinting out the array, using a 'for' loop: " << endl;
    for (int i = 0 ; i < 10 ; i++)
        cout << param[i] << endl;
}

void printArrPointer(long param[])
{
    cout << "\nPrinting out the array, using pointers to index: " << endl;
    for (long i = 0 ; i < 10 ; i++)
        cout << *(param+i) << endl;
}

int main(void)
{
    long arr[10];
    cout << "Enter 10 elements: " << endl;
    for (int i = 0 ; i < 10 ; i++)
        cin >> arr[i];
    printArrNormal(arr);
    printArrPointer(arr);
}