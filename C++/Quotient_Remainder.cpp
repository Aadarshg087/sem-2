#include<iostream>
using namespace std;

float quotient(int m, int n){
    return m/n;
}
int remainder(int o, int p){
    return o%p;
}
void go(int x, int y){
    cout<<x<<endl<<y;
}

int main(){
    cout<<"\nThis program will give output as Quoteint and Remainder"<<endl;
    int a,b;
    cout<<"Enter the dividend number: "<<endl;
    cin>>a;
    cout<<"Enter the divisor: "<<endl;
    cin>>b;                                    
    cout<<"\nHere is the Quotient: "<<quotient(a,b)<<endl;
    cout<<"Here is the Remainder: "<<remainder(a,b)<<endl;
    go(2,5);
    return 0;
}