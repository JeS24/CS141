//A C++ program to enter two angles of a triangle and find the third angle

#include <iostream>
using namespace std;

int main() {
	double ang1, ang2;
	cout << "Enter first angle:" << endl;
	cin >> ang1;
	cout << "Enter second angle:" << endl;
	cin >> ang2;
	cout << "\nThird Angle = " << (180-ang1-ang2);
}
