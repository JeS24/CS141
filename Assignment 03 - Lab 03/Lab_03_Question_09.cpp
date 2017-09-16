#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "\nEnter a character: ";
    cin >> ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << "\n'" << ch << "' is an alphabet!" << endl;
    else if (ch >= '0' && ch <= '9')
        cout << "\n'" << ch << "' is a digit!" << endl;
    else
        cout << "\n'" << ch << "' is a special character!" << endl;
}
