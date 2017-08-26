//A C++ program to enter temperature in Fahrenheit and convert it into Celsius

#include <iostream>
using namespace std;

int main() {
	double tempr;
	cout << "Enter temperature in Fahrenheit:" << endl;
	cin >> tempr;
	cout << "\nTemperature in Celsius: " << ((tempr-32)/1.8) << " Degrees";
	return 0;
}
