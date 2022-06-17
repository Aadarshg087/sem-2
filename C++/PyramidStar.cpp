#include <iostream>
using namespace std;

void pyramid(int N){
    int i=1;
    while(i<=N){
        int spaces=1;
        while (spaces<=N-i){
            cout<<" ";
            spaces=spaces+1;
        }
        int stars=1;
        while(stars<=(2*i-1)){
            cout<<"*";
            stars=stars+1;
        }
        cout<<endl;
        i=i+1;
    }
}
int main() {
    // Write C++ code here
    cout << "This code will print star pattern in centred pyramid form"<<endl;
    int n=5;
    pyramid(n);
    return 0;
}