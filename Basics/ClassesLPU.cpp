#include<iostream>
#include<conio.h>//optional
#include<string.h>
using namespace std;
class student
{
private:
        char name[20];
        int reg;
        float m1,m2,m3,per;
public:
       void get(char n[],int r,float ma1, float ma2,float ma3)
       {
       strcpy(name,n);
       reg=r;
       m1=ma1;
       m2=ma2;
       m3=ma3;
       }
       void put()
       {
       cout<<"the name="<<name<<endl;
       cout<<"the reg ="<<reg<<endl;
       cout<<"percentage="<<per;
       }
       void cal()
       {
       per=(m1+m2+m3)/3;
       }
       
};
int main()
{
    student s;
    // s.get('Neha',12345,90,89,99);
    s.cal();
    s.put();
    getch();
    return 0;
}