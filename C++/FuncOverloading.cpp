#include<iostream>
using namespace std;

// Basically in Function Overloading, You can name the function with the same name and that will cause the function overlaoding but if two function taking the same 2 arguments. Then, it will show the error because the compiler doesnt know which one to go for.

// But if the function is same and the no. of arguments are different then, basically something to differentiate, then it will work wonderfully.

int area(int m, int n){
    cout<<"\nUsing reactangle function"<<endl;
    return(m*n);
}

int area(int o){
    cout<<"\nUsing square function"<<endl;
    return(o*o);
}

// Like in these to functions the arguments is single and causing issue.So, it will throw and error and I have comment one of them.

// int area(int p){
//     cout<<"\nUsing Circle function"<<endl;
//     return(3.14*p);
// } 

int main(){
    cout<<"\nThis is a program of function overloading"<<endl;
    int a, b, r;
    a=3;
    b=5;
    r=10;
    cout<<"The area of rectangle is: "<<area(a,b)<<endl;
    cout<<"The area of square is: "<<area(b)<<endl;
    // cout<<"The area of circle is: "<<area(r)<<endl;
    return 0;
}