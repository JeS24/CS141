#include <iostream>
using namespace std;

int main()
{
    string bin, Hex, seq;
    cout << "Enter a binary number: ";
    cin >> bin;
    for ( ; bin.size()%4 != 0 ; bin = '0' + bin); //Adding leading zeroes to prepare sets of four bits
    for (int i = 0 ; i < bin.size() ; i += 4) {
        seq = bin.substr(i, i+4);
        if (seq == "0000")
            Hex += "0";
        else if (seq == "0001")
            Hex += "1";
        else if (seq == "0010")
            Hex += "2";
        else if (seq == "0011")
            Hex += "3";
        else if (seq == "0100")
            Hex += "4";
        else if (seq == "0101")
            Hex += "5";
        else if (seq == "0110")
            Hex += "6";
        else if (seq == "0111")
            Hex += "7";
        else if (seq == "1000")
            Hex += "8";
        else if (seq == "1001")
            Hex += "9";
        else if (seq == "1010")
            Hex += "A";
        else if (seq == "1011")
            Hex += "B";
        else if (seq == "1100")
            Hex += "C";
        else if (seq == "1101")
            Hex += "D";
        else if (seq == "1110")
            Hex += "E";
        else if (seq == "1111")
            Hex += "F";
    }
    cout << "\nHexadecimal representation of " << bin << ": 0x" << Hex << endl;
}
