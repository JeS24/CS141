//A C++ program to enter marks of five subjects and calculate the total, average and percentage

#include <iostream>
using namespace std;

//Assuming total marks = 100, for each subject
int main() {
	double marks[5]; //Array, which stores the marks in each subject
	double total, avg;
	cout << "Enter the marks, one-by-one:" << endl;
	for (int i = 0 ; i < 5 ; i++) {
		cin >> marks[i];
		total += marks[i];
	}
	avg = total/5;
	cout << "\nTotal Score: " << total << endl << "Average Score: " << avg << endl << "Percentage Score: " << avg << "%";
}
