#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x1, x2;
    cout << "Enter the coefficients of the quadratic equation: " << endl;
    cin >> a >> b >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
    if (!isnan(x1) && !isnan(x2))
    {
        if (x1 == x2)
            cout << "\nThe equation has equal roots! x = " << x1 << endl;
        else
            cout << "\nThe equation has unequal roots! x = " << x1 << " and " << x2 << endl;
    }
    else if ((isnan(x1) && !isnan(x2)) || (!isnan(x1) && isnan(x2)))
        cout << "\nThe equation has 1 complex and 1 real root! Real root, x = " << ((!isnan(x1))?x1:x2) << endl;
    else
        cout << "\nThe equation has complex roots!" << endl;
}
