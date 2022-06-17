#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << "FIZZ" <<", ";
        }
        else if (i % 5 == 0)
        {
            cout << "BUZZ"<<", ";
        }
        else 
            cout << i<<", ";
    }

    return 0;
}