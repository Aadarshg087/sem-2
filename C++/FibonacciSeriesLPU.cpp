#include <iostream>
using namespace std;


int fib(int n) // nth term
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else // 4    //3
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n, i, f;
	cin >> n; // 5
	for (i = 1; i <= n; i++)
	{
		f = fib(i);
		cout << f << "\t";
	}
	return 0;
}
