#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a; // Data of x is stored in a temp variable.
    *a = *b;   // Data of y is now stored in data of x
    *b = temp; // Data of x now being stored into y which was stored in temp in step 1.
    cout << "Addresses of formal parameters a and b after swap(a,b) :\na = " << a << "\tb = " << b << endl;
    cout << "Values of formal parameters a and b after swap(a,b) :\na = " << *a << "\tb = " << *b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Value of actual parameters x and y before swap(x,y) :\nx = " << x << "\ty = " << y << endl;
    cout << "Address of actual parameters x and y before swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    swap(&x, &y);
    cout << "Output of actual parameters after swap(x,y) :\nx = " << x << "\ty = " << y << endl; // Aww yeah! Swap happens.
    cout << "Address of actual parameters x and y after swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    return 0;
}

