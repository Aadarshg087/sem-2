
#include <iostream>
#include <conio.h> //optional
using namespace std;
class Time1{
    int hrs, min;
    public:
    Time1(int m){
        hrs=m/60;
        min=m%60;
    }
    void show(){
        cout<<"Time="<<hrs<<":"<<min;
    }
};
int main()
{
    // //basic to basic type
    // int a;
    // for (a = 0; a <= 255; a++)
    //     cout << a << ends << (char)a << endl;
    // getch();


    // basic to class type
    int m= 90;
    Time1 t=m;
    t.show();
    getch();    
    return 0;
}