#include <iostream>
#include <string>
using namespace std;

class Student
{
    string Name;
    int Roll_no;
    string contact;
    string place;

public:
    void insert();
    void Display();
};

void Student ::insert()
{
    string n;
    int r;
    string c;
    string p;
    cout << "Enter the Name " << endl;
    cin >> n;
    cout << "Enter the Roll Number " << endl;
    cin >> r;
    cout << "Enter the contact number " << endl;
    cin >> c;
    cout << "Enter the place where you are currently living " << endl;
    cin >> p;
    Name = n;
    Roll_no = r;
    contact = c;
    place = p;
}
void Student ::Display()
{
    cout << "Here is students data: " << endl;
    cout << "Name: " << Name << endl;
    cout << "Roll Number: " << Roll_no << endl;
    cout << "Contact number:  " << contact << endl;
    cout << "Place where you live:  " << place << endl;
}
int main()
{
    Student s1, s2;
    s1.insert();
    s1.Display();
    s2.insert();
    s2.Display();

    return 0;
}