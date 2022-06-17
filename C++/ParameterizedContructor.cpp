#include<iostream>
#include<string.h>
using namespace std;

class Student{
    string x,y;
    public:
    Student(string a, string b){
        x=a;
        y=b;
        cout<<x<<endl<<y<<endl;
        cout<<"He love India!"<<endl;
    }
    void india(void){
        cout<<"This is India"<<endl;
    }
};

int main(){
    Student s1("Ram","Indian"); 
    s1.india();
    
    return 0;
}