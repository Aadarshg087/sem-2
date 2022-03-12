#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="abc";
    string s2="abd";
    int c=s2.compare(s1);
    cout<<c<<endl;
    // s1.compare(0,2,s2,0,2);
    //Order matters a lot
    // 1==1; 0
    // 1>2; 1
    // 1<2; -1
    // cout<<s2[2];
    // print the particular char in that location
    // cout<<s2.at(2)<<endl;
    
    return 0;
}
