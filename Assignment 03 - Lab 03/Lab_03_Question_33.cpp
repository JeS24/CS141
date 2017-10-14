#include <iostream>
using namespace std;

int main()
{
    long n;
    string num;
    char ch = 0;        
    cout << "Enter an integer: ";
    cin >> n;
    num = to_string((n < 0)?(n*(-1)):n);
    for (int i = 0 ; i < num.length() ; i++)
        if (num[i] == '0')
            continue;
        else {
            ch = num[i];
            break;
        }
    cout << "\nSum of first and last digit of the entered integer: " << (ch+(num[num.size()-1]) - 96) << endl;
}
