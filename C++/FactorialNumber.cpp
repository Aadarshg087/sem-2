#include <iostream>
using namespace std;

void fact(int N)
{
    int into = 1;
    while (N >= 1)
    {
        into = into * N;
        N=N-1; 
    }
    cout << "Factorial is: " << into;
}

int main()
{
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;
    fact(n);
    return 0;
}