#include <iostream>
using namespace std;

int main()
{
    char *str, *ptr;
    cout << "Input a string: "; //" *** stack smashing detected *** " -> If Length >> (Much greater than) 20
    cin >> str;                         // ^^^^ When "char str[20]" is used | No such issue with "char *str"
    ptr = str;
    cout << "\nRequired design: " << endl;
    for (int i = 0 ; *(ptr+i) != '\0' ; i++) {
        for (int j = i ; *(ptr+j) != '\0' ; j++)
            cout << *(ptr+j);
        cout << endl;
    }
}
