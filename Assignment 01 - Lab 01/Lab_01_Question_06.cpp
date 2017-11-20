//A C++ program to enter radius of a circle and find its diameter, circumference and area

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
	double rad;
	cout << "Enter the circle's radius:" << endl;
	cin >> rad;
	if(abs(rad) != rad) //Check for -ve input
		cout << "\nError: Radius cannot be negative!!";
	else {
		cout << "\nCircle's Diameter: " << (2*rad) << " units";
		cout << "\nCircle's Circumference: " << (2*M_PI*rad) << " units";
		cout << "\nCircle's Area: " << (M_PI*pow(rad, 2)) << " square units";
	}
	return 0;
}
