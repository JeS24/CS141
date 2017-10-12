#include <iostream>
using namespace std;

short len;

void print(long param[], short i)
{
    if (i < len) {
        cout << param[i] << endl;
        print(param, ++i);
    }
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
    long arr[len];
    cout << "\nEnter the array-elements, one-by-one: " << endl;
    for (int i = 0 ; i < len ; i++)
        cin >> arr[i];
    cout << "\nList of the elements, in the array: \n" << endl;
    print(arr, 0);
}
