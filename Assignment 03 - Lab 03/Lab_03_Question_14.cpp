#include <iostream>
using namespace std;

int main()
{
    short ang1, ang2, ang3;
    cout << "\nEnter the angles of the triangle: ";
    cin >> ang1 >> ang2 >> ang3;
    if (ang1 < 0 || ang1 > 180 || ang2 < 0 || ang2 > 180 ||ang3 < 0 || ang3 > 180) {
        cout << "\nERROR: Individual angles of a triangle must lie between 0 and 180! Please input again!" << endl;
        main();
    }
    cout << "\nThe triangle is " << ((ang1+ang2+ang3 == 180)?"valid!":"NOT valid!") << endl;
}
