#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string num;
    cout << "Enter a number: ";
    cin >> num;
    long arr[num.size()];
    for (int i = num ; i > 0 ; i /= 10)
        arr[i] = atoi(num[i]);
}
