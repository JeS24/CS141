#include <iostream>
using namespace std;

int main()
{
    string num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "\nSum of first and last digit of " << num << ": " << stoi(num[0])+stoi(num[num.size()-1]) << endl;
}
