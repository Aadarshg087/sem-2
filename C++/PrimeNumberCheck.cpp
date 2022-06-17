#include <iostream>
using namespace std;

void checkPrime(int N)
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
}

int main()
{
    cout << "\nPrime Number Checker" << endl;
    int n;
    int k = 1;
    while (k < 10)
    {
        cout << "\nEnter a number: " << endl;
        cin >> n;
        checkPrime(n);
        k=k+1;
    }

    return 0;
}