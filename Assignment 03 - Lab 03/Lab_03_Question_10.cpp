#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "\nEnter a character: ";
    cin >> ch;
    //Check, in case,'ch' isn't an alphabet at all!
    while ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) {
        cout << "\nERROR: '" << ch << "' is NOT " << "an alphabet! Please input again!" << endl;
        cout << "\nEnter a character: ";
        cin >> ch;
    }
    cout << "\n'" << ch << ((ch >= 'A' && ch <= 'Z')?"' is an uppercase":"' is a lowercase") << " alphabet" << endl;
}
