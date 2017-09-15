#include <iostream>
using namespace std;

int main()
{
    char ch;
    bool flag;
    cout << "Enter a character: ";
    cin >> ch;
    //Check, in case,'ch' isn't an alphabet at all!
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        cout << "\n'" << ch << "' is NOT " << "an alphabet!" << endl;
        return -1; //Error
    }
}
