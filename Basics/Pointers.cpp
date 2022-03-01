#include<iostream>
using namespace std;
int main()
{
	int a=90
	//int *p=&a;
	int *p;
	p=&a;
	cout<<a<<endl;//a=90
	cout<<p<<endl;//value is address
	cout<<&a<<endl;
	cout<<&p<<endl;
	cout<<*p<<endl;//value at address which pointer variable poles
	cout<<*(&a)<<endl;
	*p=89
	cout<<*p<<endl;
	cout<<a<<endl;
	
}
