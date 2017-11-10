#include <iostream>
using namespace std;

class Box {
    public:
        double length; //Length of a box
        double breadth; //Breadth of a box
        double height; //Height of a box

    //Member function declaration
    double getVolume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

double Box::getVolume(void) {
    return length*breadth*height;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setBreadth(double bre) {
    breadth = bre;
}

void Box::setHeight(double hei) {
    height = hei;
}

//Main function
int main(void) {
    Box Box1;
    Box Box2;
    double volume = 0.0D;

    //Box1 specifications
    Box1.setLength(6.0);
    Box1.setBreadth(7.0); 
    Box1.setHeight(5.0);

    //Box2 specifications
    Box2.setLength(12.0); 
    Box2.setBreadth(13.0); 
    Box2.setHeight(10.0);

    //Volume of Box1
    volume = Box1.getVolume();
    cout << "Volume of Box1 : " << volume <<endl;

    //Volume of Box2
    volume = Box2.getVolume();
    cout << "Volume of Box2 : " << volume <<endl;

    return 0;
}
