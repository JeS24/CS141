//A C++ program to convert days into years, weeks and week-days

#include <iostream>
#include <cmath>
using namespace std;

double n_days, n_years, n_weeks, n_w_days;

/* IMPORTANT NOTICE: The following constants have been defined for a Sidereal Year, and not a Calendar Year,
 * for the sake of simplicity, as there are several ways to clock an year and a Sidereal Year
 * remains the most accurate depiction of 1 Physical Year.
 * So, the usual "Calendar Year to Days/Weeks Conversion" will NOT give the same results!!
*/
double WEEKS_IN_AN_YEAR = 52.17948;
double DAYS_IN_AN_YEAR = 365.25636;

int main() {
    string tagD, tagW, tagY, tagWD, tags[] = {" day refers to ", " days refer to ", " day (approximately).", " days (approximately).", " week ", " weeks ", " year, ", " years, "};

    //Input
    cout << "Enter number of days:" << endl;
    cin >> n_days;

    //Calculation
    n_years = n_days/DAYS_IN_AN_YEAR;
    n_weeks = (n_years - (int)n_years)*(WEEKS_IN_AN_YEAR);
    n_w_days = (n_weeks - (int)n_weeks)*7;

    //Semantics
    bool val = (n_days <= 1)?1:0;
    if(val) {
        tagD = tags[0];
        tagWD = tags[2];
        tagW = tags[4];
        tagY = tags[6];
    }
    else {
        tagD = tags[1];
        tagWD = tags[3];
        tagW = tags[5];
        tagY = tags[7];
    }

    //Output
    cout << endl << n_days << tagD << (int)n_years << tagY << (int)n_weeks << tagW << "and " << round(n_w_days) << tagWD;
    return 0;
}
