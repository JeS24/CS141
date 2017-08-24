//A C++ program to enter length and breadth of a rectangle and find its area

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double len, wid;
	cout << "Enter the length and breadth (in a particular order, i.e. \"a\", then \"b\"):" << endl;
	cin >> len >> wid;
	if(abs(len) != len || abs(wid) != wid) //Check for -ve input
		cout << "\nError: Dimensions cannot be negative!!";
	else
		cout << "\nRectangle\'s area: " << (len*wid) << " square units";
	return 0;
}
