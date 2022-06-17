#include <iostream>
using namespace std;

int swap(int m, int n){
    int temp;
    temp=m;
    m=n;
    n=temp;
    return 0;
}

int main()
{
    cout << "This is a program to swap two numbers" << endl;
    cout << "Enter your first number: " << endl;
    static int a; 
    int b;
    cin >> a;
    cout << "Enter your second number: " << endl;
    cin >> b;
    cout<<"Here are your entered numbers: "<<a<<" "<<b<<endl;
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    // cout << "Here are your swapped numbers: " << a << " " << b << endl;
    
    // cout<<b;
    // b=a;
    // cout<<b;


    return 0;
}