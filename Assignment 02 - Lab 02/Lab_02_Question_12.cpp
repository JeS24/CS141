//A C++ program to enter Pricipal Amount, Time & Rate, and then calculate Compound Interest

#include <iostream>
#include <cmath>
using namespace std;

//Assuming the Interest is compounded once, per year
int main() {
	double prinA, rate, timeP, CI, amt;
	cout << "Enter the Principal Amount: " << endl;
	cin >> prinA;
	cout << "Enter the Rate of Interest: " << endl;
	cin >> rate;
	cout << "Enter the Time Period, in years: " << endl;
	cin >> timeP;
	amt = prinA*pow((1+(rate/100)), timeP);
	amt = round(amt*100)/100; //Rounding off to nearest "Paise" (₹0.01) value
	CI = amt-prinA;
	cout << "\nCompound Interest on a principal amount of ₹" << prinA << " for a time period of " << timeP << " years, at a rate of interest of " << rate << "%: ₹" << CI << endl;
	cout << "And, total Amount, to be repaid, after " << timeP << " years: ₹" << amt;
}
