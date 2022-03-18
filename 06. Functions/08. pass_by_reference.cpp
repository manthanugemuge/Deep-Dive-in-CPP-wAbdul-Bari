#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Value of actual parameters x and y before swap(x,y) :\nx = " << x << "\ty = " << y << endl;
    cout << "Address of actual parameters x and y before swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    swap(x, y);
    cout << "Output of actual parameters after swap(x,y) :\nx = " << x << "\ty = " << y << endl; // Aww yeah! Swap happens.
    cout << "Address of actual parameters x and y after swap(x,y) :\nx = " << &x << "\ty = " << &y << endl;
    return 0;
}


