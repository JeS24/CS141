#include <iostream>
using namespace std;

int main()
{
    char  str[20], *p;
    cout << "Input a string, comtaining 20 characters: "; //" *** stack smashing detected *** " -> If Length >> (Much greater than) 20
    cin >> str;                                      // ^^^^ When "char str[20]" is used | No such issue with "char *str"
    p = str;
    //Beautify
    for (int i = 20 ; i >= 0 ; i--) { //Code doesn't work for length < 20
        while (*(p+i) == '\0')
            i--;
        for (int j = i ; j <= 20 ; j++)
            cout << *(p+j);
        cout << endl;
    }
}
