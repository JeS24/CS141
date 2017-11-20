#include <iostream>
using namespace std;

int len;

long getSmallest(double param[])
{
    return param[0];
}

long getLargest(double param[])
{
    return param[len-1];
}
//Returns the frequency of the element supplied, in the given 0 to 'end' range
int getFreq(double param[], double elem, int end)
{
    int count = 1;
    for (int i = 0 ; i < end ; i++)
        if(elem == param[i])
            count++;
    return count;
}

double getMean(double param[])
{
    double sum = 0;
    for (int i = 0 ; i < len ; i++)
        sum += param[i];
    return (sum/len);
}

double getMedian(double param[], int len)
{
    if (len % 2 != 0)
        return param[len/2];
    else if (len % 2 == 0)
        return ((param[(len-1)/2]+param[((len-1)/2)+1])/2);
}

double getMaxFreqElem(double param[])
{
    double max_freq_elem = param[0];
    for (int i = 0 ; i < len ; i++) {
        if(getFreq(param, max_freq_elem, len) < getFreq(param, param[i], len))
            max_freq_elem = param[i];
    }
    return max_freq_elem;
}

int main()
{
    double temp;
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
    cout << "\nThe largest element: " << getLargest(arr) << endl;
    cout << "The smallest element: " << getSmallest(arr) << endl;
    cout << "The mean of the elements: " << getMean(arr) << endl;
    //For Median
    int t_len = 0;
    for (int i = 0 ; i < len ; i++)
        if (getFreq(arr, arr[i], i) == 1)
            t_len++;
    //Creating an array, without repeated elements
    double t_arr[t_len];
    int c = 0;
    for (int i = 0 ; i < len ; i++)
        if (getFreq(arr, arr[i], i) == 1)
            t_arr[c++] = arr[i];
    cout << "The median for the given data-set: " << getMedian(t_arr, t_len) << endl;
    //Element with maximum frequency
    cout << "The element with the maximum frequency, among all the elements: " << getMaxFreqElem(arr) << endl;
    cout << "N.B. In case of more than one element, having the highest frequency values, the smaller one will be considered!" << endl;

}
