#include<iostream>
using namespace std;

class Odd{
    int c=1;
    public:
        void SumOdd();
};

void Odd :: SumOdd(){
    for (int i = 2; i < 100; i++)
    {
        if(i%2==1)
        c=c+i;
        cout<<c<<endl;
    }
}

int main(){
    Odd c1;
    c1.SumOdd();
    
    return 0;
}