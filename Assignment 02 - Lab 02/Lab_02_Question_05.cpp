//A C++ program to find power of any number x ^ y

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double base, ex;
	cout << "Enter the base-number:" << endl;
	cin >> base;
	cout << "Enter the index:" << endl;
	cin >> ex;
	cout << "\n" << base << " raised to the power of " << ex << " = " << pow(base, ex);
}
