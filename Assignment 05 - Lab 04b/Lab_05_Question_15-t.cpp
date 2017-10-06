#include <iostream>
using namespace std;

short len;
long big, small;
long getBig(long param[], long b, short i)
{
    if (b < param[i])
        b = param[i];
    cout << "\n-<<" << b;
    if (++i < len)
        getBig(param, b, i);
    big = b;
    return big;
}

long getSmall(long param[], long s, short j) // -12, 2, 4, -34 || -12, 0 --> | -12, 0-1 | -12, 1-2 | -12--34, 2-3
{
    small = s;
    if (s > param[j])
        s = param[j];
    cout << "\n->>" << s;
    if (j++ < len)
        getSmall(param, s, j);
    return small;
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
