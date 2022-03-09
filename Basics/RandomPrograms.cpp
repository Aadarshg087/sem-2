#include<iostream>
#include<string>
using namespace std;

// const float c=43.67; 

int main(){
    //************Length/Capacity etc. of a string*************************
    // string str={"Steve"};
    // cout<<str.capacity()<<"\n";
    // cout<<str.max_size()<<endl;
    // cout<<str.substr(2,3)<<endl;







    //************Calling of Local & Global Value of c*********************
     
    // int a=32 , b=54;  
    // cout<<"Value of a is: "<<a<<endl;
    // cout<<"Value of b is: "<<b<<endl;
    // int c=99.9;
    // cout<<"Value of Local c is: "<<c<<endl;
    // cout<<"Value of Global c is: "<<::c<<endl;                           //"::" This is scope resolution operator. 
                                                                            //It is used to call value of a global variable







    //****************Structures(Seq./Selection/Loop)************************
    // int age;
    // cout<<"Enter your age"<<endl;
    // cin>>age;
    // if (age<18)
    // {
    //     cout<<"You cannot come to the club"<<endl;                            //if else condtional statements program
    // }                                                                         //Selction Control Structure If else
    // else if (age==18)                                                         //Can also use ladder of if else like here
    // { 
    //     cout<<"You will get a special pass"<<endl;
    // }
    // else if (age<21)
    // {
    //     cout<<"You are welcome"<<endl;
    // }
    
    // else{
    //     cout<<"You can come to the club"<<endl;
    // }
    
    // switch (age)
    // {
    // case 18:
    //     cout<<"You are 18"<<endl;
    //     break;                                                       //Break-> Leave the switch statement as soon as the condition matches
    // case 20:
    //     cout<<"You are 20"<<endl;
    //     break;
    // case 22:
    //     cout<<"You are 22"<<endl;
    //     break;
    
    // default:
    // cout<<"No special Cases"<<endl;
    //     break;
    // }
    // cout<<"Done with the switch case."<<endl;






    //***************************For Loop in C++********************************
    // for (int i = 1; i <= 100; i++)                                      //for(initialization: condition: updatioin)
    // {                                                                   //i++ means increment by 1
    //     cout<<i<<endl;                                                  //Initailization >> Condition Check >> Print >> Increament >> Condition check & so on!
    // }
    // cout<<"Here is the sequence of 100 Natural numbers"<<endl;




    //**************************Example of infinite Loop***************************
    // cout<<"Here is a infinite Loop"<<endl;
    // for (int i = 0; i < 1000; i++)
    // {    
          
    //     cout<<i<<endl; 
    // }





    //***************************** While Loop in C++ *****************************
    // cout<<"Printing 1 to 50 using while loop"<<endl;
    // int i=1;
    // while (i<=50)                                                       //while(Condition)
    // {                                                                   //{ C++ Statements;}
    //     cout<<i<<", ";
    //     i++;
    // }
    // cout<<"That's it"<<endl;





    //************************* do-while Loop **************************************
    // int i=1;
    // do                                                                  //Will run once without checking any condition                                                                    //since it will reach the cout command earlier than while condition command                                                                   
    // {                                                                   //since it will reach the cout command earlier than while condition command   
    //     cout<<i<<endl;                                                  //And then, run according to the condition
    //     i++;
    // } while (false);





    //*********************** Multiplication Table of 6 *******************************
    // int const c=6;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<"6 multiplied by "<<i<<"= "<<c*i<<endl;
    // }
    
    
    
    






    
    return 0;
}