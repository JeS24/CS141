#include <iostream>
using namespace std;

class Rectangle {
    public:
        double length;
        double breadth;

    //Member function declaration
    double area();
    double perimeter();
};

double Rectangle::area() {
    return length*breadth;
}

double Rectangle::perimeter() {
    return 2*(length+breadth);
}

//Main function
int main(void) {
    Rectangle rect1;
    Rectangle rect2;
    double l = 0.0d, b = 0.0d;

    //Rectangle1 specs
    cout << "Enter the length and breadth of the first rectangle:" << endl;
    cin >> l >> b; //Should have "bad-input" checks ->> Make amends!
    rect1.length = l;
    rect1.breadth = b;

    //Rectangle1 specs
    cout << "\nNow, enter the length and breadth of the first rectangle:" << endl;
    cin >> l >> b;
    rect2.length = l;
    rect2.breadth = b;

    //Equal case ignored ->> Probably should not.
    cout << "\nThe " << ((rect1.area() > rect2.area())?"first":"second") << " rectangle has a larger Area.";
    cout << " And, the " << ((rect1.perimeter() > rect2.perimeter())?"first":"second") << " rectangle has a larger Perimeter." << endl;

    return 0;
}
