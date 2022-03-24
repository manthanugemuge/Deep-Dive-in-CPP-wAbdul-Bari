#include <iostream>
using namespace std;
class Your; // So we do class Your; before its declaration so compiler understands it on Line #14
class My
{
private:
    int a = 10;
    friend Your; // When we write friend here compiler might say there is no class named Your GoTo: Line 9
};

class Your
{
public:
    My m;
    void fun()
    {
        cout << "Value of private member of class m is : " << m.a;
        // Error until we give access upon object of class My using friend by making Your as friend class of object
    }
};


int main()
{
    Your y;
    y.fun();
    return 0;
}
