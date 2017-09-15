#include <iostream>
using namespace std;

int main()
{
    char ch;
    bool flagU, flagL;
    cout << "Enter a character: ";
    cin >> ch;
    
    //Using ASCII charset
    for (int i = 65 ; i <= 90 ; i++) // 'A' to 'Z'
        if (ch == i)
            flagU = true;
    for (int i = 97 ; i <= 122 ; i++) // 'a' to 'z'
        if (ch == i)
            flagL = true;
    if (!flagU && !flagL) { //Check, in case, 'ch' isn't an alphabet at all!
        cout << "\n'" << ch << "' is not an alphabet!" << endl;
        return -1; //Errors
    }
    cout << "\n'" << ch << ((flagU)?"' is an uppercase ":"' is a lowercase ") << "alphabet!" << endl;
}
