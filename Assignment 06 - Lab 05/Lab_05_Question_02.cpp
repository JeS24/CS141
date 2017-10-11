#include <iostream>
using namespace std;

int len;

double sumArr(double param[])
{
    double sum = 0;
    for(int i = 0 ; i < len ; i++)
        sum += param[i];
    return sum;
}

int main()
{
    cout << "Enter the length of the array: ";
    cin >> len;
    while (len < 1) {
        cout << "\nERROR: The length must be positive! Please input again!" << endl;
        cout << "\nEnter the length of the array: ";
        cin >> len;
    }
    double arr[len];
    cout << "\nEnter the array-elements, one-by-one: " << endl;
    for (int i = 0 ; i < len ; i++)
        cin >> arr[i];
    cout << "\nSum of all the elements of the entered array: " << sumArr(arr) << endl;
}
