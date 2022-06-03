#include <iostream>
using namespace std;
// This will not swap the values
// void swap(int a, int b)
// {
//     int c = a;
//     a = b;
//     b = c;
// }

// We have to swap the values using pointers.Also called Call by reference. So,
void swapPoint(int *a, int *b)
{
    int c = *a;
    *a = *b;                  //"*a" this means value at address a
    *b = c;
}

int main()
{
    int x = 4;
    int y = 5;
    cout << "Values are: " << x << "," << y << endl;
    // swap(x, y);                // This will give error & will not swap the values as it will pick up the values of x and y.
    swapPoint(&x, &y);            // it will find the address and change/swap the values
    cout << "Swapped values are: " << x << "," << y << endl;
    return 0;

}
