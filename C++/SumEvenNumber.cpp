#include <iostream>
using namespace std;

int printSum(int N)
{
    int val=0;
    for (int i = 1; i <= N * 2; i++)
    {
        if (i % 2 == 0)
        {
            val = val + i;
        }
    }
    return val;
}

int main()
{
    cout << "Enter a number: " << endl;
    int N;
    cin >> N;
    cout << "Sum is: " << printSum(N);
    return 0;
}