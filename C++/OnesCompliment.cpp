#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string r;

public:
    void insert();
    void check();
    void change();
    void display();
};

void Binary ::insert()
{
    cout << "Enter Your binary number: " << endl;
    cin >> r;
}
void Binary ::check()
{
    for (int i = 0; i < r.length(); i++)
    {
        if (r.at(i) != '0' && r.at(i) != '1')
        {
            cout << "Incomplete binary number!" << endl;
            exit(0);
        }
    }
}
void Binary :: change()
{
    for (int i = 0; i < r.length(); i++)
    {
        if (r.at(i) == '0')
        {
            r.at(i) = '1';
        }
        else
        {
            r.at(i) = '0';
        }
    }
}
void Binary :: display()
{
    cout << "Displaying it Ones Compliment: " << endl;
    for (int i = 0; i < r.length(); i++)
    {
        cout << r.at(i);
    }
}

int main()
{
    Binary p;
    p.insert();
    p.check();
    p.change();
    p.display();

    return 0;
}