#include <iostream>
using namespace std;

long k_large(long param[], int s, int k)
{
    return param[s-k];
}

long k_small(long param[], int s, int k)
{
    return param[k-1];
}

int main()
{
    int k, len, temp;
    cout << "Enter the length of the array: ";
    cin >> len;
    while (len < 1) {
        cout << "\nERROR: The length must be positive! Please input again!" << endl;
        cout << "\nEnter the length of the array: ";
        cin >> len;
    }
    long arr[len];
    cout << "\nEnter the array-elements, one-by-one: " << endl;
    for (int i = 0 ; i < len ; i++)
        cin >> arr[i];
    cout << "\nEnter the value of 'k': ";
    cin >> k;
    while (k < 0 || k > len) {
        cout << "\nERROR: 'k' must be positive and must also lie between 1 and the array-length! Please input again!" << endl;
        cout << "\nEnter the value of 'k': ";
        cin >> k;
    }
    //Bubble-Sorting the array
    for (int i = 0 ; i < len ; i++)
        for (int j = 0 ; j < len-1-i ; j++)
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    //Passing the sorted array to the relevant functions
    cout << "kth largest element in the array: " << k_large(arr, len, k) << endl;
    cout << "kth smallest element in the array: " << k_small(arr, len, k) << endl << endl;
}
