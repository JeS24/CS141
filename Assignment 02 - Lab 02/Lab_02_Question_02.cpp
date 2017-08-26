//A C++ program to enter temperature in Celsius and convert it into Fahrenheit

#include <iostream>
using namespace std;

int main() {
	double tempr;
	cout << "Enter temperature in Celsius:" << endl;
	cin >> tempr;
	cout << "\nTemperature in Fahrenheit: " << ((tempr*1.8)+32) << " Degrees";
	return 0;
}
