#include <iostream>
using namespace std;

int main()
{
    short phy_m, chem_m, bio_m, maths_m, cs_m;
    double p_cent;
    cout << "Enter the marks of each subject, one-by-one: " << endl;
    cin >> phy_m >> chem_m >> bio_m >> maths_m >> cs_m;
    if ( phy_m < 0 || chem_m < 0 || bio_m < 0 || maths_m < 0 || cs_m < 0 || phy_m > 100 || chem_m > 100 || bio_m > 100 || maths_m > 100 || cs_m > 100) {
        cout << "\nERROR: Individual Subject Marks must lie between 0 and 100! Please input again!" << endl;
        main();
    }
    p_cent = (phy_m + chem_m + bio_m + maths_m + cs_m)/5;
    cout << "\nPercentage Score: " << p_cent << "%" << endl;
    cout << "Grade obtained: ";
    if (p_cent >= 90)
        cout << "A";
    else if (p_cent >= 80 && p_cent < 90)
        cout << "B";
    else if (p_cent >= 70 && p_cent < 80)
        cout << "C";
    else if (p_cent >= 60 && p_cent < 70)
        cout << "D";
    else if (p_cent >= 40 && p_cent < 60)
        cout << "E";
    else
        cout << "F";
    cout << endl;
}
