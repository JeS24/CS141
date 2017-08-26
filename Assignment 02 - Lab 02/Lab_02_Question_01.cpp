//A C++ program to enter length in centimetre and convert it into metre and kilometre

#include <iostream>
using namespace std;

int main() {
	double len;
	cout << "Enter length in centimetres: " << endl;
	cin >> len;
	cout << "\nLength in metres: " << (len/100) << " m" << endl << "Length in kilometres: " << (len/100000) << " km";
	return 0;
}
