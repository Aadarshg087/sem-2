#include<iostream>
using namespace std;

void printLCM(){
    int m,n,o;
    cout<<"Enter 2 number: "<<endl;
    cin>>m>>n;
    o=min(m,n);
    for (int i = 2; i <= o; i++)
    {
        if (m%i==0 && n%i==0)
        {
            cout<<"LCM is: "<<i;
            break;
        }
        else
            cout<<"The LCM is 1"<<endl;
        break;
        
    }
    
}

int main(){
    printLCM();
    return 0;
}