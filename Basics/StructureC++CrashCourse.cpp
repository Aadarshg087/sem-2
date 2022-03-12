#include <iostream>
using namespace std;

// typedef struct employee                                //typedef is used to rename the structure as entioned 'ee' 
// {                                                      //now i can replace struct employee with ee because i used typedef
//     int id;                                            //structure is used to enter different values of different types 
//     char name;
//     float salary;
// }ee;


union bartersys
{
    int rice;    //4 bits                                     //will only allocated one size memory & we can use only one of them in the output
    char name;   //1 bit                                      //that's why its called union of memory
    float dollar;//4 bits
};

int main()
{
    // struct employee rahul;
    // struct employee das;                                //Here we can add the details of the people accordignly
    // rahul.id= 100;
    // rahul.name='R';                                    //single bit is used that means only one alphabet can be assinged 
    // das.id=101;                                         //I was getting error while filling the value of rahul.name because 
    // rahul.salary= 1.2L;                                //I was using " "(these)[It is used to add string] instead of ''(these)[It is used to add char] which I declared name as char. That; swhy it was giving error
    // das.name='D';
    // das.salary=500;
    
    // cout<<das.id<<endl;
    // cout<<das.name<<endl;
    // cout<<das.salary<<endl;

    // cout<<rahul.id<<endl;
    // cout<<rahul.name<<endl;
    // cout<<rahul.salary<<endl;
    
    

    // union bartersys b1;
    // b1.rice= 54;
    // b1.name='R';                                     //memory work in sequence here. Most recent one will be assigned to the memory
    // b1.dollar=56;                                    //most recent vaule is used to the memory and if you print the b1.rice it will show the garbage value as memory is updated with the recent one.
    // cout<<b1.rice<<endl;
    // cout<<b1.name<<endl;
    // cout<<b1.dollar<<endl;

    enum meal {breakfast, lunch, dinner};             //I think it is used the readebility of program 
    meal m1=lunch;
    cout<<(m1==1)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}