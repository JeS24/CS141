#include <iostream>
using namespace std;

int main()
{
    long n, i = 1;
    cout << "Enter the end-index, 'n': ";
    cin >> n;
    if (n < i) { //So, 'n' can't be '0' or '-ve'
        cout << "Invalid index! Please input again!\n" << endl;
        main(); //Error
    }
    cout << "\nHere's the natural number sequence: " << endl;
    while(i <= n) {
        cout << i;
        i++;
        cout << ", ";
    }
    cout << "\b\b.\x20\n\n"; //To remove the trailing ',' and put '.' | 'x20' is in UTF-8 for 'Space'
}
