#include <iostream>
using namespace std;

short len;

long getBig(long param[], long b, short i)
{
    if (b < param[i])
        b = param[i];
    if (++i < len)
        return getBig(param, b, i);
    else
        return b;
}

long getSmall(long param[], long s, short i)
{
    if (s > param[i])
        s = param[i];
    if (++i < len)
        return getSmall(param, s, i);
    else
        return s;
}

int main()
{
    cout << "Enter the length of the array: ";
    cin >> len;
    long arr[len];
    cout << "\nEnter the array-elements, one-by-one: " << endl;
    for (int i = 0 ; i < len ; i++)
        cin >> arr[i];
    cout << "\nLargest element in the array: " << getBig(arr, arr[0], 0) << endl;
    cout << "And, the Smallest element in the array: " << getSmall(arr, arr[0], 0) << endl;
}
