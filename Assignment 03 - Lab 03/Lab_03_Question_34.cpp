#include <iostream>
using namespace std;

int main()
{
    string num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "\nModified number: " << num[num.size()-1] + num.substr(1, num.size()-2) + num[0] << endl;
}
