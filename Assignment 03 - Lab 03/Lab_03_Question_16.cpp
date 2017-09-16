#include <iostream>
using namespace std;

int main()
{
    short s1, s2, s3;
    cout << "\nEnter the length of the sides of the triangle: ";
    cin >> s1 >> s2 >> s3;
    if (s1 < 0 || s2 < 0 || s3 < 0) {
        cout << "\nERROR: Length of sides cannot be negative! Please input again!" << endl;
        main();
    }
    if (s1 == s2 && s2 == s3)
        cout << "\nThis triangle is an equilateral triangle!" << endl;
    else if (s1 != s2  && s2 != s3 && s3 != s1)
        cout << "\nThis triangle is a scalene triangle!" << endl;
    else
        cout << "\nThis triangle is an iscosceles triangle!" << endl;
}
