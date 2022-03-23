#include <iostream>
using namespace std;

class Employee
{
private:
    char name[50];
    char designation[50];
    int salary;
    int id;

public:
    void ip();
    void op();
};
void Employee::ip()
{
    cout << "enter the name" << endl;
    cin >> name;
    cout << "enter the designation" << endl;
    cin >> designation;
    cout << "enter the salary" << endl;
    cin >> salary;
    cout << "enter the id" << endl;
    cin >> id;
}
void Employee::op()
{
    cout << "Name: " << name << endl;
    cout << "Designation: " << designation << endl;
    cout << "Salary: " << salary << endl;
    cout << "id: " << id;
}
int main()
{
    Employee s;
    s.ip();
    s.op();

    return 0;
}
