#include <iostream>
#include <string>
using namespace std;

//Assuming binary input
int main()
{
    string bin;
    string comp = "";
    cout << "Enter a binary number: ";
    cin >> bin;
    for (int i = 0 ; i < bin.size() ; i++)
        comp.insert(i, (bin[i] == '1')?"0":"1");
    cout << "\nOne's Complement of " << bin << ": " << comp << endl;
}
