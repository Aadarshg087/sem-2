#include<iostream>
using namespace std;

int factorial(int f){
    int result=1;
    for (int i = f; i >= 1; i--)
    {
        result=i*result;
    }
        return result;
    
    
}

int main(){
    cout<<"This is a program to create a factorial of any given number"<<endl;
    int a;
    cout<<"Enter your number: "<<endl;
    cin>>a;
    cout<<factorial(a);

    return 0;
}