#include <iostream>
using namespace std;

string getHex(int num)
{
    switch (num)
    {
        case 0: return "0";
        case 1: return "1";
        case 2: return "2";
        case 3: return "3";
        case 4: return "4";
        case 5: return "5";
        case 6: return "6";
        case 7: return "7";
        case 8: return "8";
        case 9: return "9";
        case 10: return "A";
        case 11: return "B";
        case 12: return "C";
        case 13: return "D";
        case 14: return "E";
        case 15: return "F";
    }
}

string rev(string st)
{
    string tmp;
    for (int i = st.length()-1 ; i >= 0 ; i--)
        tmp += st.at(i);
    return tmp;
}

int main()
{
    long dec, tmp;
    string hex;
    cout << "Enter a decimal value: ";
    cin >> dec;
    tmp = dec;
    while (tmp > 0)
    {
        hex += getHex(tmp%16);
        tmp /= 16;
    }
    cout << "\nHexadecimal representation of the entered number: 0x" << rev(hex) << endl;
}
