#include <iostream>
using namespace std;

int main()
{
    string bin, Oct, seq;
    cout << "Enter a binary number: ";
    cin >> bin;
    for ( ; bin.size()%3 != 0 ; bin = '0' + bin);
    for (int i = 0 ; i < bin.size() ; i += 3) {
        seq = bin.substr(i, i+3);
        if (seq == "000")
            Oct += "0";
        else if (seq == "001")
            Oct += "1";
        else if (seq == "010")
            Oct += "2";
        else if (seq == "011")
            Oct += "3";
        else if (seq == "100")
            Oct += "4";
        else if (seq == "101")
            Oct += "5";
        else if (seq == "110")
            Oct += "6";
        else if (seq == "111")
            Oct += "7";
    }
    cout << "\nOctal representation of " << bin << ": " << Oct << endl;
}
