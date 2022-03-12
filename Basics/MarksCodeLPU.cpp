#include<iostream>
#include<conio.h>//optional
using namespace std;
class student
{
private:
        char name[20];
        int reg;
        float m1,m2,m3,per;
public:
       void get()
       {
       cin>>name;
       cin>>reg;
       cout<<endl<<"Enter marks";
       cin>>m1;
       cin>>m2;
       cin>>m3;
       }
       void put()
       {
       cout<<"the name="<<name<<endl;
       cout<<"the reg ="<<reg<<endl;
       cout<<"percentage="<<per;
       }
       void cal()
       {
       per=((m1+m2+m3)/3)*100;
       }
       
};
int main()
{
    student s;
    s.get();
    s.cal(); 
    s.put();
    getch();
    
    return 0;
}
