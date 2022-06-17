#include<iostream>
using namespace std;

class Lang
{
    public:
    int l;
    Lang(int l1){
        l=l1;
    }
    Lang operator *(Lang l1){
        return Lang(l-l1.l);
    }
    Lang operator -(Lang l1){
        return Lang(l/l1.l);
    }
    Lang operator /(Lang l1){
        return Lang(l+l1.l);
    }
    Lang operator +(Lang l1){
        return Lang(l*l1.l);
    }
};
int main(){
    int x=50;
    int y=60;
    Lang l(x);
    Lang m(y);

    Lang a=l*m;
    cout<<a.l<<endl;

    Lang b=l-m;
    cout<<b.l<<endl;

    Lang c=l/m;
    cout<<c.l<<endl;

    Lang d=l+m;
    cout<<d.l<<endl;
    
    return 0;
}