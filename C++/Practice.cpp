#include <iostream>
#include <typeinfo>
using namespace std;

bool prime2(int p)
{

    int i = 2;
    while (i <= p / 2)
    {
        if (p % i == 0)
        {
            return false;
            // cout << "This is not a prime number" << endl;
        }
        i++;
    }
    return true;
    // cout << "This is prime number." << endl;
}

void prime(int p)
{
    int i = 2;
    while (i <= p / 2)
    {
        if (p % i == 0)
        {
            cout << "This is not a prime number" << endl;
        }
        i++;
    }
    cout << "This is prime number." << endl;
}

// void eo(int a)
// {
//     if (a % 2 == 0)
//     {
//         cout << "The given number is even" << endl;

//     }
//     else
//         cout << "The given number is odd" << endl;

// }

// int max(int m, int n, int o)
// {
//     if (m > n)
//     {
//         if (m > o)
//         {
//             return m;
//         }
//         else
//             return o;
//     }
//     else if (n > o)
//     {
//         return n;
//     }
//     else
//         return o;
// }

// int min(int d, int e, int f)
// {
//     // return (d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f);

//     int result = (d < e) ? ((d < f) ? d : f) : ((e < f) ? e : f);
//     return result;

//     if (d < e)
//     {
//         if (d < f)
//         {
//             return d;d
//         }
//         else
//             return f;
//     }
//     else if (e < f)
//     {
//         return e;
//     }
//     else
//         return f;
// }

// void min2(int d, int e, int f)
// {
//     if (d < e)
//     {
//         if (d < f)
//         {
//             cout << d;
//         }
//         else
//             cout << f;
//     }
//     else if (e < f)
//     {
//         cout << e;
//     }
//     else
//         cout << f;
// }

// int circum(int m){
//     return 2*3.14*m;
// }

// int product(int a, int b)
// {
//     return a * b;
// }

int main()
{
    cout << "This program is designed to find out whethee the given number is prime or not" << endl;
    int a;
    cout << "Enter your number: " << endl;
    cin >> a;
    // prime(a);
    if (prime2(a))
    {
        cout << "This number is prime" << endl;
    }
    else
        cout << "This number is not prime" << endl;

    // cout << "This Program find out whether the given number is odd or even" << endl;
    // int x;
    // cout << "Enter the number: " << endl;
    // cin >> x;
    // eo(x);

    // cout << "This program gives output as maximnum nuber and minimum number between three numbers. " << endl;
    // cout << "Enter your first number: " << endl;
    // int a, b, c;
    // cin >> a;
    // cout << "Enter your second number: " << endl;
    // cin >> b;
    // cout << "Enter you third number: " << endl;
    // cin >> c;
    // cout << "Here are your numbers: " << a << "," << b << "," << c << endl;
    // cout << "Largest Number is: " << max(a, b, c) << endl;
    // cout << "Smallest Number is: " << min(a, b, c) << endl;
    // cout << "Void wala function minimum chal raha hai" << endl;
    // min2(a, b, c);

    // cout<<"This is a program to find the Circumfrence of a circle"<<endl;
    // int a;
    // cout<<"Enter he radius of the circle: "<<endl;
    // cin>>a;
    // cout<<circum(a);

    // cout << "This programis designed for product of 2 numbers using function" << endl;
    // cout << "Enter your first number: " << endl;
    // int m, n;
    // cin >> m;
    // cout << "Enter your second number: " << endl;
    // cin >> n;
    // cout << product(m, n);

    // int a=10;
    // double b=10.5;
    // a=10.5;

    // cout<<a<<" /"<<b;
    // cout<<typeid(a);

    // Static Variable
    // the value will be saved from the recent operation and if the loop or
    // function/operation initiates again, it wil take the recent value not the 0 value
    // not recommended to used with inline functions
    // static int c=0;
    // c=c+1;
    // cout<<c<<endl;

    return 0;
}