#include<iostream>
using namespace std;

int powerFunction(int A, int b){
    int x=A;
    for (int i = 1; i < b; i++)
    {
        A=A*x;
    }
    return A;
    
}

int main(){
    cout<<"Enter two numbers: "<<endl;
    int a, b;
    cin>>a>>b;
    cout<<powerFunction(a,b);
    return 0;
}