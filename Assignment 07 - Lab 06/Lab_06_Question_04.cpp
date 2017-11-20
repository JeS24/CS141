#include<iostream>
using namespace std;

int main()
{
    char name[] = "JYOTIRMAYA SHIVOTTAM";
    //Normal Index Method
    cout << "Printing out name using normal index method: ";
    for (int i = 0 ; i < 20 ; i++)
        cout << name[i];
    //Pointer Method
    cout << "\nPrinting out name using 'pointer'method: ";
    for (int i = 0 ; i < 20 ; i++)
        cout << *(name+i);
    cout << endl;
}