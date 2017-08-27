//A C++ program to enter Pricipal Amount, Time & Rate, and then calculate Simple Interest

#include <iostream>
using namespace std;

int main() {
	double prinA, rate, timeP, SI;
	cout << "Enter the Principal Amount: " << endl;
	cin >> prinA;
	cout << "Enter the Rate of Interest: " << endl;
	cin >> rate;
	cout << "Enter the Time Period, in years: " << endl;
	cin >> timeP;
	SI = (prinA*rate*timeP)/100;
	cout << "\nSimple Interest on a principal amount of ₹" << prinA << " for a time period of " << timeP << " years, at a rate of interest of " << rate << "%: ₹" << SI << endl;
	cout << "And, total Amount, to be repaid: ₹" << (prinA+SI);
}
