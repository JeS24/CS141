#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    cout << "Sequence of even numbers, between 1 and 100: " << endl;
    while(i <= 100) {
        if (i % 2 == 0)
            cout << i << ", ";
        i++;
    }
    cout << "\b\b.\x20" << endl;
}
