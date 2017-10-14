#include <iostream>
using namespace std;

int getNum(char sub)
{
    switch (sub)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
    }
}

int main()
{
    string str;
    long dec = 0;
    cout << "Enter a hexadecimal value: ";
    cin >> str;
    for (int i = 0 ; i < str.length() ; i++)
    {
        char t = str.at(i);
        if (t == '0' || t == 'x' || t == 'X')
            continue;
        else
            dec = 16*dec + getNum(t);
    }
    cout << "\nDecimal representation of the entered number: " << dec << endl;
}
