#include <iostream>
#include <string>
using namespace std;

// const float c=43.67;

int main()
{
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
    // It is used to call value of a global variable

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
    // {                                                                   //since it will reach the "cout" command earlier than while condition command
    //     cout<<i<<endl;                                                  //And then, run according to the condition
    //     i++;
    // } while (false);

    //*********************** Multiplication Table of 6 *******************************
    // int const c=6;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<"6 multiplied by "<<i<<"= "<<c*i<<endl;
    // }

    //************************* Break & Continue ********************************
    // for (int i = 0; i < 50; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==3){
    //         cout<<"That's it"<<endl;
    //         break;                                              //It breaks the loop immediately

    //     }

    // for (int i = 0; i < 40; i++)
    // {
    //     if(i>20){
    //         continue;                                             //stop this iteration and move to the next iteration

    //     }
    //     cout<<i<<endl;
    // }

    //***************************** Pointers **********************************
    // int a=55;
    // int* b= &a;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<b<<endl;                        //&--> is address of operator
    // cout<<"The value at address b is "<<*b<<endl;                   //*--> dereference operator
    // cout<<"The value of a is "<<a<<endl;

    // //********* Pointer to pointer *************
    // int** c= &b;
    // cout<<"The address of pointer b is "<<c<<endl;
    // cout<<"The value at pointer b is "<<**c<<endl;

    //********************************* Arrays **********************************
    // int marks[10]={30,32,54,76,34,151,36,15,15,5};
    // cout<<marks[0]<<endl;                                       //calling values from array from the mentioned position
    // cout<<marks[1]<<endl;
    // cout<<marks[9]<<endl;
    // cout<<marks[8]<<endl;
    // marks[8]=90;                                                //updated the value at position 8 from 15 to 90
    // cout<<marks[8]<<endl;

    //*************************** Printing arrays with for loop ****************************
    // int marks[]={00,11,22,33,44,55,66,77,88,99};
    // for (int i = 0; i < 100; i++)
    // {
    //     cout<<"Integer present at position "<<i<<" is "<<marks[i]<<endl;
    // }

    // ************************* Printing arrays using while loops **************************
    // int marks[10] = {22, 64, 654, 5, 664, 84, 94, 354, 456};
    // int i = 0;
    // while (i > 9)
    // {
    //     cout<< "Position: " << i << " and " << marks[i]<< endl;
    //     i++;
    // }

    // ********************** Printing arrays using while loops *****************************
    // int marks[]={10,11,12,13,14,15,16,17,18,19,20};
    // int i=0;
    // do
    // {
    //     cout<<"Position: "<<i<<" and value: "<<marks[i]<<endl;
    //     i++;
    // } while (i<11);






    // *************************** Pointer and arrays ********************
    // int marks[]={11,1,2,3,4,5,6,7,8,9,10};
    // int* p= marks;
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;                  //we are using pointer in array.
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;                  //here *(p+2)
    // cout<<"The value of marks[7] is "<<*(p+7)<<endl;
    // cout<<"The value of marks[] is "<<*(++p)<<endl;                  //++P is basically adding calling value having index p+1





    // ***********************


    return 0;
    
}