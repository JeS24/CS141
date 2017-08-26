//A C++ program to enter base and height of a triangle and then, find its area

#include <iostream>
using namespace std;

int main() {
	double base, height;
	cout << "Enter the Base:" << endl;
	cin >> base;
	cout << "Enter the Height:" << endl;
	cin >> height;
	cout << "\nArea of the triangle: " << (0.5*base*height) << " square units.";
}
