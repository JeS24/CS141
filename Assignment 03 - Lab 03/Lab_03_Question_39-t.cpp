#include <iostream>
#include <cstdlib>
using namespace std;

void getFreq(string st)
{
    long arr[10]; //Stores frequencies of digits
    for (int i = 0 ; i < 10 ; i++)
        arr[i] = 0;
    for (int i = 0 ; i < st.length() ; i++)
        for (int j = 0 ; j < st.length() ; j++)
            if (st[i] == st[j])
                arr[st[i]-48]++;
    for (int i = 0 ; i < 10 ; i++)
        if (arr[i] != 0)
            cout << "Frequency of " << st[i] << ": " << arr[i] << endl;
}

int main()
{
    string num;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;
    getFreq(num);
}
