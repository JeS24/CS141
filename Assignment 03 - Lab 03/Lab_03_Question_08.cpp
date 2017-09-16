#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "\nEnter a character: ";
    cin >> ch;
    //Check, in case,'ch' isn't an alphabet at all!
    if ((ch <= 'A' || ch >= 'Z') && (ch <= 'a' || ch >= 'z')) {
        cout << "\nERROR: '" << ch << "' is NOT " << "an alphabet! Please input again!" << endl;
        main(); //Error
    }
    cout << "\n'" << ch << ((ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')?"' is ":"' is NOT ") << "a vowel." << endl;
}
