#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << "Here's the English Alphabet: " << endl;
    while(ch <= 122)
        cout << ch++ << ", ";
    cout << "\b\b.\x20" << endl;
}
