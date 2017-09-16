#include <iostream>
using namespace std;

string num;

string getWord();

int main()
{
    cout << "Enter a number: ";
    cin >> num;
    cout << "\n" << num << " in words: ";
    for (int i = 0 ; i < num.size() ; i++)
        switch(num[i])
        {
            case '0': cout << " ZERO"; break ;
            case '1': cout << " ONE"; break ;
            case '2': cout << " TWO"; break ;
            case '3': cout << " THREE"; break ;
            case '4': cout << " FOUR"; break ;
            case '5': cout << " FIVE"; break ;
            case '6': cout << " SIX"; break ;
            case '7': cout << " SEVEN"; break ;
            case '8': cout << " EIGHT"; break ;
            case '9': cout << " NINE"; break ;
            default: cout << "\nERROR: The entered number conatins an invalid character!" << endl;
        }
    cout << endl;
}
