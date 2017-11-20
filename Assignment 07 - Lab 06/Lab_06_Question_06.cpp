#include <iostream>
using namespace std;

int main()
{
    char *str, *ptr;
    cout << "Input a string: " << endl; //" *** stack smashing detected *** " -> If Length >>>> (Much greater than) 20
    cin >> str;                         // ^^^^ When "char str[20]" is used | No such issue with "char *str"
    ptr = str;
    for (int j = 20 ; j > 0 ; j--) {
        if (*(ptr+j) == '\0')
            j--;
        for (int i = j ; i <= 20 ; i++)
            cout << *(ptr+i);
        cout << endl;
    }
}