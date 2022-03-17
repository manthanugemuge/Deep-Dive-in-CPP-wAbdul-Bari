#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Output of formal parameters a and b after swap(a,b) : " << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << "Value of actual parameters x and y before swap(x,y) : " << x << " " << y << endl;
    swap(x, y);
    cout << "Output of actual parameters after swap(x,y) : " << x << " " << y << endl; // LOL swap doesn't happens.
    return 0;
}
