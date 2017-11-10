#include <iostream>

// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{   
    public:
        // default class constructor (with no arguments):
        Point(); 

        // class constructor that sets the coordinates x, y to the values xval, yval:
        Point(int xval, int yval);

        // member function for moving a point by dx, dy:
        void Move(int dx, int dy);

        // member functions for getting values of x, y:
        int Get_X() const;
        int Get_Y() const;

        // member functions for setting x, y to xval, yval respectively  
        void Set_X(int xval);
        void Set_Y(int yval);

        //Lab 7 exercise 4.1. Add declaration of member function Print here:
        //member function to print out a point
        void print();

    // private data members x, y represent coordinates of the point:
    private:
        int X;
        int Y;
};


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
    X = 0;
    Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
    X = xval;
    Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
    X += dx;
    Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
    return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
    return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
    X = xval;
}

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
    Y = yval;
}
   

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print() {
    std::cout << "Coordinates: (" << X << ", " << Y << ")" << std::endl;
}
// ********************************************************************

//Test of added functionality
int main(void)
{
    Point pt(2, 3);
    pt.print();
}
