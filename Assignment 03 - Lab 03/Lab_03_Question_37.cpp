#include <iostream>
using namespace std;

int main()
{
    long num;
    cout << "Enter a positive number: ";
    cin >> num;
    if(num < 0) {
        cout << "\nThe entered number must be positive! Please input again!" << endl;
        main();
    }
    cout << "\n" << num << " in reverse: ";
    for(int i = num ; i > 0 ; i /= 10)
        cout << (i%10);
    cout << endl;
}
