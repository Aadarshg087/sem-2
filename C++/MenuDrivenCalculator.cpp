#include <iostream>
using namespace std;

int main()
{
    float a = 0, b = 0;
    cout << "Menu driven Calculator App\n";
    cout << "Enter Integer values for two variables, A and B\n";
    cin >> a >> b;
    cout << "Select Operation (1-4):\n";
    int choice = 0;
    cout << " 1. Addition\n 2. Substraction\n 3. Multiplication\n 4. Division\n";
    cin >> choice;
    float result = 0;
    switch (choice)
    {
    case 1:
        result = a + b;
        cout << result;
        break;

    case 2:
        result = a - b;
        cout << result;
        break;

    case 3:
        result = a * b;
        cout << result;
        break;
    case 4:
        result = (a / b);
        cout << result;
        break;

    default:
        break;
    }
    return 0;
}