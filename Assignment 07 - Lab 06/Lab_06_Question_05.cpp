#include <iostream>
using namespace std;

int main()
{
    char  str[20], *p,a;
    cout << "Input a string (Maximum Length: 20): " << endl; //" *** stack smashing detected *** " -> If Length >>>> (Much greater than) 20
    cin >> str;
    p = str;
    cout << "\nRequired design: " << endl;
    for(int j = 0 ; *(p+j) != '\0' ; j++) {
        for(int i = j ; *(p+i) != '\0' ; i++)
            cout << *(p+i);
        cout << endl;
    }
}