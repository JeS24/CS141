#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "\nEnter a character: ";
    cin >> ch;
    //Check, in case,'ch' isn't an alphabet at all!
    while ((ch < 65 || ch > 90) && (ch < 97 || ch > 122)) {
        cout << "\nERROR: '" << ch << "' is NOT " << "an alphabet! Please input again!" << endl;
        cout << "\nEnter a character: ";
        cin >> ch;
    }
    cout << "\n'" << ch << ((ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')?"' is a vowel!":"' is a consonant!") << endl;
}
