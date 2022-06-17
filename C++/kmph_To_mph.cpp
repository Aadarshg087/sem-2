#include<iostream>
using namespace std;

float mph(float m){
    return m/1.6;
}

float kmph(float n){
    return n*1.6;
}


int main(){
    cout<<"\nThis is a program which converts kilometer per hour to miles per hour. "<<endl;
    float a;
    cout<<"Enter the value in kilometers: "<<endl;
    cin>>a;
    cout<<mph(a);
    cout<<" miles pre hour"<<endl;

    cout<<"\nNow it will convert the values from mph to kmph"<<endl;
    float b;
    cout<<"Enter the value in miles per hour: "<<endl;
    cin>>b;
    cout<< kmph(b)<<" kmph";

    cout<<"This will";    


    return 0;
}