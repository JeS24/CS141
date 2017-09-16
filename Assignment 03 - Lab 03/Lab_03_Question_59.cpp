#include <iostream>
using namespace std;

int main()
{
    int i;
    string bin, comp;
    cout << "Enter a binary number: ";
    cin >> bin;
    comp = bin;
    for (i = comp.size() ; i >= 0 ; i--)
        if (comp[i] == '1')
           break;
    if (i == 0)
        comp = '1' + comp;
    for (int j = i-1 ; j >= 0; j--) {
        if (comp[j] == '1')
           comp[j] = '0';
        else
           comp[j] = '1';
    }
    cout << "\nTwo's Complement of " << bin << ": " << comp << endl;
    /*
    for (int i = 0 ; i < bin.size() ; i++)
        comp.insert(i, (bin[i] == '1')?"0":"1");
    
    c*/
}
