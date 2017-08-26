/**WORK
   UNDER
   PROGRESS
**/

//A C++ program to convert days into years, weeks and days

#include <iostream>
#include <cmath>
using namespace std;

double n_days;
int n_years, n_weeks;
int main() {
	cout << "Enter number of days:" << endl;
	cin >> n_days;
	cout << endl << n_days << " refers to " ;
	return 0;
}

int getYears()
{
	int n_4_years = (n_days/365)/4;
	if (n_4_years < 1) //Because >4 years mean >1460 days - accounting for the leap year
		return n_4_years;
	else
		return n_4_years;
}

int getWeeks()
{
	return (n_years*52);
}

int getDays()
{
	if ()
}
