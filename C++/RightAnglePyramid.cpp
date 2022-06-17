// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printStars(int N){
    int i=1;
    while(i<=N){
        int star=1;
        while(star<=i){
            cout<<"*";
            star=star+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}

int main() {
    // Write C++ code here
    cout<<"\nThis code will print stars in pyramid form"<<endl;
    int n;
    cout<<"Enter the rows: ";
    cin>>n;
    printStars(n);

    return 0;
}