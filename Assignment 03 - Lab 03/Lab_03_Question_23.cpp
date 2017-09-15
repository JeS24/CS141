#include <iostream>
using namespace std;

int main()
{
    long n;
    cout << "Enter the index, 'n': ";
    cin >> n;
    if (n > 0) //So, 'n' can't be '0' or '-ve'
        cout << "\nHere's the natural number sequence, in reverse: " << endl;
    else {
        cout << "Invalid index!\n" << endl;
        return -1; //Error
    }
    while(n > 0) {
        cout << n;
        n--;
        cout << ", ";
    }
    cout << "\b\b.\u0020\n\n"; //To remove the trailing ',' and put '.' | 'u0020' is in UTF-8 for 'Space'
}
