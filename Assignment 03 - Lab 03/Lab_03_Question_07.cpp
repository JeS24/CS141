#include <iostream>
using namespace std;

int main()
{
    char ch;
    bool flag;
    cout << "Enter a character: ";
    cin >> ch;
    //Using ASCII charset
    cout << "\n'" << ch << (((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))?"' is ":"' is NOT ") << "an alphabet!" << endl;
}
