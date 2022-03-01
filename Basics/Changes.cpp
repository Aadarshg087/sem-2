#include<iostream>
using namespace std;
int main()
{
	//datatyppe &ref_varname=var_name;
	int a=90;
	int &b=a;//b is ref variable of a
	cout<<a<<endl;
	cout<<b<<endl;
	b=78;
	    cout<<a<<endl;
	cout<<b<<endl; 
}
