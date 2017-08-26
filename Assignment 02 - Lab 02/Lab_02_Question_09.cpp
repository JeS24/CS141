//A C++ program to calculate area of an equilateral triangle

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double side;
	cout << "Enter the length of the side:" << endl;
	cin >> side;
	cout << "\nArea of the equilateral triangle: " << (sqrt(3)/4)*(pow(side, 2)) << " square units.";
}
