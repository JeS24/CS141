#include <iostream>
using namespace std;

int main()
{
    long n;
    cout << "Enter the index, 'n': ";
    cin >> n;
    while (n <= 0) { //So, 'n' can't be '0' or '-ve'
        cout << "Invalid index! Please input again!\n" << endl;
        cout << "\nEnter the index, 'n': ";
        cin >> n;
    }
    cout << "\nHere's the natural number sequence, in reverse: " << endl;
    while (n > 0) {
        cout << n;
        n--;
        cout << ", ";
    }
    cout << "\b\b.\u0020\n\n"; //To remove the trailing ',' and put '.' | 'u0020' is in UTF-8 for 'Space'
}
