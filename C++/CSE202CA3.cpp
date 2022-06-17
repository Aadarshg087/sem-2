#include<iostream>
using namespace std;

class Area{
    protected:
    float a, b;
};
class Rectangle: public Area{
    public:
    void insert(){
        cout<<"Enter the height: "<<endl;
        cin>>a;
        cout<<"Enter the width: "<<endl;
        cin>>b;
    }
    void display(){
        cout<<"Area of rectangle is: "<<a*b<<endl;
    }
};
class Triangle: public Area{
    public:
    void insert(){
        cout<<"Enter the height: "<<endl;
        cin>>a;
        cout<<"Enter the base: "<<endl;
        cin>>b;
    }
    void display(){
        cout<<"Area of Triangle is: "<<(1/2*a*b)<<endl;
    }
};
class Circle: public Area{
    public:
    void insert(){
        cout<<"Enter the Radius: "<<endl;
        cin>>a;
    }
    void display(){
        float p=3.14;
        cout<<"Area of Circle is: "<<(p*a*a)<<endl;
    }
};

int main(){
    
    Rectangle x;
    x.insert();
    x.display();

    Triangle y;
    y.insert();
    y.display();

    Circle z;
    z.insert();
    z.display();

    return 0;
}