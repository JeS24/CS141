//A C++ program to enter two numbers and perform all arithmetic operations

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b;
	cout << "Enter two numbers (in a particular order, i.e. \"a\", then \"b\"):" << endl;
	cin >> a >> b;
	
	//Basic Arithmetic
	cout << "\nSum of " << a << " and " << b << ": " << (a+b);
	cout << "\nDifference of " << a << " and " << b << ": " << (a-b);
	cout << "\nProduct of " << a << " and " << b << ": " << (a*b);
	
	//Division - a/b
	if (b == 0)
		cout << "\nDivision is NOT defined, as b = 0.";
	else if (floor(a) == a && floor(b) == b) //When both the inputs are inetgers
		cout << "\nDivision of " << a << " and " << b << " results in " << floor(abs(a/b)) << " as quotient, and " << remainder(a,b) << " as remainder.";
	else //When any of the input is non-integer
		cout << "\nDivision of " << a << " and " << b << " results in " << (a/b) << " as quotient.";
	
	//Squares
	cout << "\nSquares of " << a << " and " << b << ": " << pow(a, 2) << " and " << pow(b, 2);
	
	//Square roots
	if (abs(a) == a && abs(b) == b) //Checking for negative inputs
		cout << "\nSquare roots of " << a << " and " << b << ": " << sqrt(a) << " and " << sqrt(b);
	else if (abs(a) != a && abs(b) == b) {
		cout << "\nSquare root of \"a\" is not defined, as it is negative.";
		cout << "\nSquare root of " << b << ": " << sqrt(b);
	}
	else if (abs(b) != b && abs(a) == a) {
		cout << "\nSquare root of " << a << ": " << sqrt(a);
		cout << "\nSquare root of \"b\" is not defined, as it is negative.";
	}
	return 0;
}
