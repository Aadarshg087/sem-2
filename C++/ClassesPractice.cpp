#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\nThis is a Program which is a bit weird!" << endl;
    int a;
    int b;
    cout << "Enter your two favourite numbers: " << endl;
    cin >> a >> b;
    cout << "(a) Type '*' to subtract the numbers " << endl;
    cout << "(b) Type '-' to divide the numbers " << endl;
    cout << "(c) Type '/' to add the numbers " << endl;
    cout << "(d) Type '+' to multiply the numbers " << endl;
    char s;
    int c;
    cin >> s;
    if (s == '*')
    {
        c = a - b;
        cout << c;
    }
    else if (s == '-')
    {
        c = a / b;
        cout << c;
    }
    else if (s == '/')
    {
        c = a + b;
        cout << c;
    }
    else
    {
        c = a * b;
        cout << c;
    }

    return 0;
}
