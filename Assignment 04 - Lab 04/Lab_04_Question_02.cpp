//A C++ program to find diameter, circumference and area of a circle, using functions
#include <iostream>
#include <cmath>
using namespace std;

double radius;

double getDiameter()
{
    return (radius/2);
}

double getArea()
{
    return (M_PI*radius*radius);
}

double getCircumference()
{
    return (2*M_PI*radius);
}

int main()
{
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    if (radius < 0) {
        cout << "\nERROR: Radius cannot be negative! Please input again!\n";
        main();
    }
    cout << "\nDiameter: " << getDiameter() << " units" << endl;
    cout << "Circumference: " << getCircumference()  << " units" << endl;
    cout << "Area: " << getArea() << " square units" << endl;
}
