// Pointer 
// #include<iostream>
// #include<conio.h>//optional
// using namespace std;
// int main()
// {  
//     int a[5]={11,22,33,44,55};
//     int *p;
//     p=a;//int *p=&a[0];
//     cout<<*p<<endl;//11
//     p=p+3;
//     cout<<*p<<endl;//44
//     p--;
//     cout<<*p<<endl;//33
//     p=p-1;
//     cout<<*p<<endl;//22
//     p++;
//     cout<<*p<<endl;//33 
//     getch();
//     return 0;
// }


// Pointer 
#include<iostream>
#include<conio.h>//optional
using namespace std;
int main()
{  
    int a[5]={11,22,33,44,55};
    int *p,*p1;
    p=a;//int *p=&a[0];
    p1=&a[3];
    cout<<p1-p;
    getch();//optional
    return 0;
}