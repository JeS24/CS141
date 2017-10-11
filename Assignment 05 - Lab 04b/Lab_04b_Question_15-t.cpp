#include <iostream>
using namespace std;

short len;
long big, small;
long getBig(long param[], long b, short i)
{
for (int i = 0; i )

    if (b < param[i])
        b = param[i];
    if (++i < len)
        getBig(param, b, i);
}

long getSmall(long param[], long s, short j) // 2, -12, 4, -34 |
{
    if (s > param[j])
        s = param[j];
    if (j++ < len)
        getSmall(param, s, j);
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
