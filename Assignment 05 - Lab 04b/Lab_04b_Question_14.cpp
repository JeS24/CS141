#include <iostream>
using namespace std;

short len;
long sum;

long getSum(long param[], short i)
{
    sum += param[i];
    if (++i < len) //Important point
        getSum(param, i);
    return sum;
}

int main()
{
    cout << "Enter the length of the array: ";
    cin >> len;
    while (len < 1) {
        cout << "\nERROR: The length of the array must be positive! Please input again!" << endl;
        cout << "\nEnter the length of the array: ";
        cin >> len;
    }
    long arr[len]; //Array declaration [Primitive]
    cout << "\nEnter the array-elements, one-by-one: " << endl;
    for (int i = 0 ; i < len ; i++)
        cin >> arr[i];
    cout << "\nSum of the elements of the array: " << getSum(arr, 0) << endl;
}
