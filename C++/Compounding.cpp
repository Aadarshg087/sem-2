#include <iostream>
using namespace std;

void compound()
{
    long long int x = 2;
    for (int i = 1; i <= 64; i++)
    {
        x = x * 2;
        cout << i << " " << x << endl;
    }
}

int main()
{
    cout << "This is program to show compounding effect" << endl;
    compound();
    return 0;
}