#include <iostream>
using namespace std;

void basicPrime(int N);

void checkPrime(int N);

void printPrime(int N)
{
    int ans;
    int a = 2;
    while (a < N)
    {
        cout << a << "-This is a" << endl;
        int i = 2;
        while (i < a)
        {
            cout << i << "-This is i" << endl;
            if (a % i == 0)
            {
                // number is divisible. That's why not prime
                ans = a;
                i++;
            }
            else
                i++;
        }
        cout << a << "-This should be the answer" << endl;
        cout << ans << "-This is ans varable" << endl;
        a++;
    }
}

int main()
{
    cout << "\n Prime number checker: " << endl;
    cout << "Enter a number: " << endl;
    int a = 8;
    // cin >> a;
    // printPrime(a);
    // basicPrime(a);
    checkPrime(a);
    return 0;
}

void checkPrime(int N)
{
    int x = 2;
    while (x < 8)
    {

        int i = 2;
        while (i <= (N - 1))
        {
            if (N % i == 0)
            {
                cout << "This is not a Prime Number" << endl;
                return;
            }
            else
                i = i + 1;
        }
        cout << "This is a Prime Number" << endl;
        x++;
    }
}

void basicPrime(int N)
{
    int ans;
    int i = 2;
    while (i <= (N - 1))
    {
        for (int a = 2; a < i; a++)
        {
            if (i % a == 0)
            {
                ans = i;
                a++;
            }
            else
                a++;
        }
        cout << i;
        i++;
    }
}