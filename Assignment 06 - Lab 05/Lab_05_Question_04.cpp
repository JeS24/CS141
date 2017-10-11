#include <iostream>
using namespace std;

int len_A, len_B;

void maxElemArrs(double param[])
{
    double largest, t_largest;
    for (int i = 0 ; i < (len_A+len_B)-1 ; i++) {
        t_largest = (param[i] > param[i+1])?param[i]:param[i+1];
        largest = (largest < t_largest)?t_largest:largest;
    }
    cout << "\nThe largest element, among all, in both the arrays: " << largest << endl;
}

void minElemArrs(double param[])
{
    double smallest, t_smallest;
    for (int i = 0 ; i < (len_A+len_B)-1 ; i++) {
        t_smallest = (param[i] < param[i+1])?param[i]:param[i+1];
        smallest = (smallest > t_smallest)?t_smallest:smallest;
    }
    cout << "The smallest element, among all, in both the arrays: " << smallest << endl;
}

void mergeArrs(double param_A[], double param_B[])
{
    int i = 0, j = 0;
    double mergedArr[len_A+len_B];
    for ( ; i < len_A ; i++)
        mergedArr[i] = param_A[i];
    for ( ; i < len_A+len_B ; i++)
        mergedArr[i] = param_B[j++];
    for (int k = 0 ; k < (len_A+len_B) ; k++)
        cout << mergedArr[k] << endl;
    maxElemArrs(mergedArr);
    minElemArrs(mergedArr);
}

int main()
{
    short ch;
    cout << "Enter the length of the arrays, one-by-one: " << endl;
    cin >> len_A >> len_B;
    while (len_A < 1 || len_B < 1) {
        cout << "\nERROR: Array-length must be positive! Please input again!" << endl;
        cout << "Enter the length of the arrays, one-by-one: " << endl;
        cin >> len_A >> len_B;
    }
    double arr_A[len_A], arr_B[len_B];;
    cout << "\nEnter the elements for the first array, one-by-one: " << endl;
    for (int i = 0 ; i < len_A ; i++)
        cin >> arr_A[i];
    cout << "\nEnter the elements for the second array, one-by-one: " << endl;
    for (int i = 0 ; i < len_B ; i++)
         cin >> arr_B[i];
    cout << "\nMerged array: " << endl; mergeArrs(arr_A, arr_B);
}
