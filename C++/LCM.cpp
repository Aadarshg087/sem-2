#include <iostream>
using namespace std;

int lcm1(int a, int b)

// cout << "Enter 2 numbers: " << endl;
// int a, b;
// cin >> a >> b;
{
    if (b == 0) return a;
    return lcm1(b, a % b);
}

int gcd(int a, int b)
{
    return (a * b) / lcm1(a, b);
}

int lcm()
{
    cout << "Enter 2 numbers: " << endl;
    int a, b;
    cin >> a >> b;
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
            res++;
        }
    }
    return res;
}

void printLCM()
{
    int m, n, o, p;
    cout << "Enter 2 number: " << endl;
    cin >> m >> n;
    o = max(m, n);

    for (int i = 2; i <= o; i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            p = i;
        }
    }
    cout << p << endl;
}

// LCM * GCD=Product(A,B)
// LCM= Product(A,B)/GCD

int LCM_from_GCD(int x, int y)
{
    int z = x * y;
    int gcd;
    for (int i = 2; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    cout << "gcd is: " << gcd << endl;
    int lcm = z / gcd;
    cout << "LCM is: " << lcm << endl;

    return lcm;
}

int main()
{
    // printLCM();
    // int a, b;
    int t;

    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    cout << "gcd is(Sehaj wala): " << lcm1( a, b) << endl;
    cout << "lcm of sahaj: " << gcd( a, b) << endl;    
    }

    // cout << "Enter a number (main): " << endl;
    // int X, Y;
    // cin >> X >> Y;
    // cout << "LCM is: " << LCM_from_GCD(X, Y);
    return 0;
}