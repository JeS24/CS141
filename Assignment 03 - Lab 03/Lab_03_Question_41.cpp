#include <iostream>
using namespace std;

int main()
{
    cout << "Table of all ASCII Characters, with their values: " << endl;
    for (int i = 0 ; i < 256 ; i++) //Terminal might not display all characters
        cout << (char)i << ": " << i << endl;
}
