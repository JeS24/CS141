#include <iostream>
#include <cmath>
using namespace std;

long num;

void checkPrime();
void checkArmstrong();
void checkPerfect();

int main()
{
    short choice;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "\nERROR: The entered number must be positive! Please input again!" << endl;
        main();
    }
    cout << "\nWhat do you want to check?\n\n1. Check for Prime Number\n2. Check for Armstrong Number\n3. Check for Perfect Number\nYour Choice (1/2/3): ";
    cin >> choice;
    switch(choice)
    {
        case 1: checkPrime(); break;
        case 2: checkArmstrong(); break;
        case 3: checkPerfect(); break;
        default: cout << "ERROR: Invalid choice! Please make your choice again!" << endl;
    }
}

void checkPrime()
{
    short counter = 0;
    for (int i = 1 ; i <= num/2 ; i++)
        if (num % i == 0)
            counter++;
    cout << "\n" << num << ((counter == 1)?" is ":" is NOT ") << "a Prime number!" << endl;
}

void checkArmstrong()
{
    int sum = 0;
    for (long n = num ; n > 0 ; n /= 10)
        sum += pow(n%10, 3);
    cout << "\n" << num << ((sum == num)?" is ":" is NOT ") << "an Armstrong number!" << endl;
}

void checkPerfect()
{
    short sum = 0;
    for(int i = 1 ; i <= num/2 ; i++) // (num/2) -> Because, "Proper Divisors"
        if(num % i == 0)
            sum += i;
    cout << "\n" << num << ((sum == num)?" is ":" is NOT ") << "a Perfect number." << endl;
}
