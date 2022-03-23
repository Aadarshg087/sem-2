#include <iostream>
using namespace std;

int main()
{
    // char a = '*';
    // cout << "This is a pattern program" << endl;
    // for (int i = 0; i <= 5; i++)
    // {
    //     int c=1;
    //     while (c<=5)
    //     {
    //        cout<<i<<"*";
    //        c++;
    //     }

    // }
    // int n = 0;
    // cin >> n;

    for (int o = 0; o < 10; o++)
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 5 - i + 1; j++)
                cout << "* ";
            cout << endl;
        }

        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i + 1; j++)
                cout << "* ";
            cout << endl;
        }
    }

    return 0;
}