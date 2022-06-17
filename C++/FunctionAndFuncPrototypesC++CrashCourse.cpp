#include <iostream>
using namespace std;

// Functions are used to divide the work,
// just call the function whenever we needed in the main function

// int multiply(int a, int b)                                    // recieves the value and it will do its calculations and return the value c as mentioned
// {
//     int c = a * b;
//     return c;
// }

int multiply(int a , int b);                                 //Using function prototyping concept. Basically, telling the program to search more you'll find this program.
void g();
int main()
{
    int m, n;
    cout << "This is a mulitplication Program" << endl;
    cout << "Enter Your First Number: " << endl;
    cin >> m;
    cout << "Enter your Second Number: " << endl;
    cin >> n;
    // m and n are actual parameters
    cout << multiply(m, n);                                    // Now it will search for this functions and send the value to the function.
    g();
    return 0;                                                  // This means that your code has run successfully whithout any issue.
}

int multiply(int a, int b)                                    // When function is declared after the the main function.It genreally shows error as it is unable to find the function. Then, we have to use function prototyping concept
{
    // a and b are formal parameters and will be taking values from actual parameters
    int c = a * b;                                            // It means we have to used declare it before the main func. Not everything. Just the heading in order to give assurity to the program that the function you are searching is available. Just search more.
    return c;
}
void g(){
    cout<<"\nThank You for your time";
}