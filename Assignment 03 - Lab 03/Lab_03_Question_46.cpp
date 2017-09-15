#include <iostream>
using namespace std;

int main()
{
    int n1, n2, bigger;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;
    bigger = (n1 > n2) ? n1 : n2;
    do {
        if (bigger % n1 == 0 && bigger % n2 == 0) {
            cout << "\nLCM of " << n1 << " and " << n2 << ": " << bigger << endl;
            break;
        }
        else
            ++bigger;
    } while(true);
}
