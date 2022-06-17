#include<iostream>
#include<string.h>
using namespace std;

void primeCheck(int N){
    string str="It is a prime number";
    int i=2;
    while (i<=N/2)
    {
        if (N%i==0)
        { 
            cout<<"Not a prime number"<<endl;
            return;
        }
        else
            i++;
    }
    cout<<"This is a prime number"<<endl;
    
}

int main(){
    cout<<"Prime Numbe Checker! "<<endl;
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    primeCheck(a);
    return 0;
}