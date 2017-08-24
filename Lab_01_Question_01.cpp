//A C++ program to perform input/output of all basic data types

#include <iostream>
using namespace std;

int main() {
	int Int;
	char Char;
	float Float;
	double Double;
	bool Bool;
	cout << "INPUT-OUTPUT OF BASIC DATA-TYPES" << endl;
	cout << "Enter in the following order: int -> char -> float -> double -> bool \n";
	cin >> Int >> Char >> Float >> Double >> Bool;
	cout << "\nHere's what you entered: \n";
	cout  << "Integer: " << Int << "\nChar: " << Char << "\nFloat: " << Float << "\nDouble: " << Double << "\nBoolean: " << Bool;
	return 0;
}
