#include <iostream>
using namespace std;

int main()
{
    char *str, *p;
    cout << "Input a string: " << endl; //" *** stack smashing detected *** " -> If Length >>>> (Much greater than) 20
    cin >> str;                                              // ^^^^ When "char str[20]" is used | No such issue with "char *str"
    p = str;
    cout << "\nRequired design: " << endl;
    for(int j = 0 ; *(p+j) != '\0' ; j++) {
        for(int i = j ; *(p+i) != '\0' ; i++)
            cout << *(p+i);
        cout << endl;
    }
}