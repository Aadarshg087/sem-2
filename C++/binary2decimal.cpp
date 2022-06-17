#include <iostream>
#include<string.h>
using namespace std;

int decimal(int N)
{
    if (N == '1' && N == '0')
    {
        int ans = 0;
        int p = 1;
        while (N != 0)
        {
            int n = N % 10;
            ans = ans + n * p;
            p = p * 2;
            N = N / 10;
        }
        return ans;
    }
    else
        cout << "Enter a valid number!" << endl;
}

// Not completed properly and needed some more coding on it.
int main()
{
    cout << "Enter a number: " << endl;
    int a;
    cin >> a;
    cout << decimal(a);
    return 0;
}