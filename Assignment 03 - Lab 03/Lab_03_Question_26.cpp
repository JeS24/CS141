#include <iostream>
using namespace std;

int main()
{
    /*for(int i = 1 ; i <= 100 ; i += 2) //Alternate, but fixated solution
        cout << i << endl;*/
    int i = 1;
    cout << "Sequence of odd numbers, between 1 and 100: " << endl;
    while(i <= 100) {
        if (i % 2 != 0)
            cout << i << ", ";
        i++;
    }
    cout << "\b\b.\x20" << endl;
}
