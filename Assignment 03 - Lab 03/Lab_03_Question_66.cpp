#include <iostream>
using namespace std;

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
    string bin;
    cout << "Enter a decimal value: ";
    cin >> dec;
    tmp = dec;
    while (tmp > 0)
    {
        bin += to_string(tmp%2);
        tmp /= 2;
    }
    cout << "\nBinary representation of the entered number: " << ((dec == 0)?"0":rev(bin)) << endl;
}
