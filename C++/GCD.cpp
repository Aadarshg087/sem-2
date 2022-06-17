#include <iostream>
using namespace std;

void gcdChecker(int m, int n)
{
    int gcd;
    int i = 1;
    while (i <= min(m, n))
    {
        if (m % i == 0 && n % i == 0)
        {
            gcd = i;
            i = i + 1;
        }
        else
            i = i + 1;
    }
    cout << "\nThe greatest common divisor is: " << gcd;
}

int main()
{
    cout << "Greatest Commnon Divisor Finder" << endl;
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    gcdChecker(a, b);
    return 0;
}